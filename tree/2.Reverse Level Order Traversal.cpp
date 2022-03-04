https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1

void postorder(Node* root,int level,vector<vector<int>>&res){
    if(root==NULL){
        return;
    }
     res[level].push_back(root->data);
    postorder(root->left,level+1,res);
    postorder(root->right,level+1,res);
   
    
}
vector<int> reverseLevelOrder(Node *root)
{
    vector<vector<int>> result(10000);
    vector<int> res;
    if(root==NULL){
        return res;
    }
     int level=0;
     postorder(root,level,result);
     reverse(result.begin(),result.end());
    //  for(auto x:result){
    //      for(auto t:x){
    //          res.push_back(t);
    //      }
    //  }
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            res.push_back(result[i][j]);
        }
    }
     return res;
}


vector<int> reverseLevelOrder(Node *root)
{
     vector<vector<int>> result;
     vector<int> res;
        if(root==NULL){
            return res;
        }
        queue<Node*> q;
        q.push(root);
          
        while(q.empty()==false){
            int size=q.size();
          
            for(int i=0;i<size;i++){
            Node* temp=q.front();
            q.pop();
                res.push_back(temp->data);
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
        for(int i=0;i<result.size();i++){
            for(int j=0;j<result[i].size();j++){
                res.push_back(result[i][j]);
            }
        }
        return res;
}
