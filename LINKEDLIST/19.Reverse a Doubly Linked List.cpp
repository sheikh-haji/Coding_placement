https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1


Node* reverseDLL(Node * head)
{
    //Your code here
    Node* prevptr=NULL;
    Node* curr=head;
    Node* n=NULL;
    while(curr!=NULL){
        n=curr->next;
        curr->next=prevptr;
        curr->prev=n;
        prevptr=curr;
        curr=n;
    }
    return prevptr;
}
