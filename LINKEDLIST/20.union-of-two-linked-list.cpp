https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
map<int,struct Node*> m;
    struct Node* temp=head1;
    while(temp!=NULL){
        m.insert({temp->data,temp});
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL){
        m.insert({temp->data,temp});
        temp=temp->next;
    }
    Node* dummy=new Node(0);
    Node* i=dummy;
    for(auto x:m){
        i->next=x.second;
        i=i->next;
    }
    i->next=NULL;
    return dummy->next;
}
