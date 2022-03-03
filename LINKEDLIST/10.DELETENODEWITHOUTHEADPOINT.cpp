https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1

void deleteNode(Node *del)
    {
       // Your code here
       if(node->next){
           node->data=node->next->data;
           Node* temp=node->next;
           node->next=temp->next;
           delete(temp);
       }
    }
