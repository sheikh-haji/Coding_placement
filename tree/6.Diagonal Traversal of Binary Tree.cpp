https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

void func(Node* root,unordered_map<int,vector<int>>&m,int dia,int &maxi){
    if(root==NULL){
        return;
    }
    if(maxi<dia){
        maxi=dia;
    }
    m[dia].push_back(root->data);
    func(root->left,m,dia+1,maxi);
    func(root->right,m,dia,maxi);
}
vector<int> diagonal(Node *root)
{
   // your code here
   unordered_map<int,vector<int>> m;
   vector<int> res;
   if(root==NULL){
       return res;
   }
    int dia=0;
    int maxi=-1;
   func(root,m,dia,maxi);
   for(int i=0;i<=maxi;i++){
       for(auto t:m[i]){
       res.push_back(t);
           
       }
   }
   return res;
}
