https://leetcode.com/problems/binary-tree-level-order-traversal 
vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
          vector<int> res;
        while(q.empty()==false){
            int size=q.size();
          
            for(int i=0;i<size;i++){
            TreeNode* temp=q.front();
            q.pop();
                res.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            
            }
            result.push_back(res);
            res.clear();
        }
        reverse(result.begin(),result.end());
        return result;
    }
.
