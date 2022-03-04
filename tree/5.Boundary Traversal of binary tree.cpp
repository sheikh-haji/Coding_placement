https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
 void leftside(Node* root,vector<int>&res){
     Node* temp=root;
     
     while(1){
         if(temp->left!=NULL){
             res.push_back(temp->data);
             temp=temp->left;
         }
         else if(temp->right!=NULL){
             res.push_back(temp->data);
             temp=temp->right;
         }
         else{
             break;
         }
     }
     
   }
   void leafnode(Node* root,vector<int> &res){
       if(root==NULL){
           return;
       }
       if(root->left==NULL and root->right==NULL){
           res.push_back(root->data);
       }
       leafnode(root->left,res);
       leafnode(root->right,res);
   }
 void rightview(Node* root,vector<int> &v){
        vector<int> res;
        Node* temp=root;
        if(root==NULL){
            return;
        }
     while(1){
         if(temp->right!=NULL){
             res.push_back(temp->data);
             temp=temp->right;
         }
         else if(temp->left!=NULL){
             res.push_back(temp->data);
             temp=temp->left;
         }
         else{
             break;
         }
     }
     reverse(res.begin(),res.end());
     for(auto x:res){
         v.push_back(x);
     }
     
   }
    vector <int> boundary(Node *root)
    {
        
        vector<int> res;
        if(root==NULL ){
            return res;
        }
        if(root->left==NULL and root->right==NULL){
        res.push_back(root->data);
        return res;
            
        }
        if(root->left!=NULL){
        leftside(root,res);}
        else{
            res.push_back(root->data);
        }
        leafnode(root,res);
        if(root->right!=NULL)
        rightview(root->right,res);
        return res;
    }
