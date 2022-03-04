https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

vector<vector<int>> verticalTraversal(TreeNode* root) {
      vector<vector<int>> result;
        map<pair<int,int>,vector<int>> res;
        if(root==NULL){
            return result;
        }
        int maxi=INT_MAX;
        int level=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(q.empty()==false){
               int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front().first;
                int horizontal=q.front().second;
                maxi=min(maxi,horizontal);
                q.pop();
                res[{horizontal,level}].push_back(temp->val);
                if(temp->left!=NULL){
                    q.push({temp->left,horizontal-1});
                }
                if(temp->right!=NULL){
                    q.push({temp->right,horizontal+1});
                }
            }
            level++;
        }
        int prev=maxi;
        vector<int> temp;
        // bool flag=true;
        for(auto x:res){
            if(prev!=x.first.first){     
            result.push_back(temp);
            temp.clear();
             prev=x.first.first;
            }
            sort(x.second.begin(),x.second.end());
            for(auto t:x.second){
            temp.push_back(t);
            }
        }
        if(temp.size()!=0){
            result.push_back(temp);
        }
        return result;  
    
     }
     
