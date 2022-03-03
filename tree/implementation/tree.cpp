#include<iostream>
#include<queue>
using namespace std;

class Node{
public: 
	int data;
	Node* left;
	Node* right;
	Node(){
		data=0;
		right=NULL;
		left=NULL;
	}
	Node(int x){
	    left=NULL;
		right=NULL;
		data=x;
	}
};

void preorder(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(Node* root)
{
	if(root==NULL){
		return ;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(Node* root){
	if(root==NULL){
		return ;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void levelorder(Node* root){

	queue<Node*> q;
	q.push(root);
	while(q.empty()==false){
		Node* temp=q.front();
		cout<<temp->data<<" ";
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
        q.pop();
	}

}
void create_tree_level_order(Node*& root){
	int x;
	cout<<"Enter the root";
	cin>>x;
    root=new Node(1);
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
    	Node* temp=q.front();
    	cout<<"Enter the left child of "<<temp->data<<"->";
    	cin>>x;
    	if(x!=-1){
    		temp->left=new Node(x);
    		q.push(temp->left);
    	} 
    	cout<<"Enter the right child of "<<temp->data<<"->";
    	cin>>x;
    	if(x!=-1){
    		temp->right=new Node(x);
    		q.push(temp->right);
    	}
    	q.pop();
    }

}
int main(){

      Node* root=new Node(1);
      root->left=new Node(2);
      root->right=new Node(3);
      root->left->left=new Node(4);
      root->left->right=new Node(5);
      root->right->left=new Node(6);
      root->right->right=new Node(7);
      preorder(root);
      cout<<endl;
      inorder(root);
      cout<<endl;
      postorder(root);
      cout<<endl;
      cout<<"BFS-->";
      levelorder(root);
       cout<<endl<<endl;
    // Creating a tree level order wise
      Node* root1=NULL;
      create_tree_level_order(root1);
       preorder(root);
      cout<<endl;
      inorder(root);
      cout<<endl;
      postorder(root);
      cout<<endl;
      cout<<"BFS-->";
      levelorder(root);
       cout<<endl<<endl;

	return 0;
}

/* tree
//                 1
//                / \
//               2   3
//              / \ / \
//             4  5 6  7
*/
