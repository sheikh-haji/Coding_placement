
https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1

Stack
vector<int> findSpiral(Node *root)
{  vector<int> res;
    if(root==NULL){
        return res;
    }
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    bool flag=true;
    while(!s1.empty() || !s2.empty()){
        if(flag){
            while(s1.empty()==false){
                Node* temp=s1.top();
                res.push_back(temp->data);
                s1.pop();
                if(temp->right){
                    s2.push(temp->right);
                }
                if(temp->left){
                    s2.push(temp->left);
                }
            }
            
            flag=false;
        }
        else{
            while(s2.empty()==false){
                Node* temp=s2.top();
                res.push_back(temp->data);
                s2.pop();
                if(temp->left){
                    s1.push(temp->left);
                }
                if(temp->right){
                    s1.push(temp->right);
                }
                
            }
            
            flag=true;
        }
        
    }
    return res;
    
}



deque
vector<int> findSpiral(Node *root)
{  //Your code here
    vector<int> res;
    if(root==NULL){
        return res;
    }
    int level=1;
    deque<Node*> q;
    q.push_back(root);
while(q.empty()==false)
{
        int size=q.size();
        vector<Node*> res1;
    for(int i=0;i<size;i++)
    {
            Node* temp=NULL;
        if(level%2==0)
        {
             temp=q.front();
             q.pop_front();
        }
        else
        {
             temp=q.back();
             q.pop_back();
        }
        
        res.push_back(temp->data);
            
        if(level%2==0)
        {
            if(temp->left){
            res1.push_back(temp->left);
            }
            if(temp->right){
            res1.push_back(temp->right);
            }
        }
        if(level%2==1)
        {
            if(temp->right){
            res1.push_back(temp->right);
            }
            if(temp->left){
            res1.push_back(temp->left);
            }
            
        }
            
    }
            if(level%2==1){
                reverse(res1.begin(),res1.end());
            }
            for(auto x:res1){
                // cout<<x->data<<" ";
            q.push_back(x);}
        // cout<<endl;
        level++;
            
}
    return res;
    
}
