https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1

 Node* mid1(Node* head){
       Node* f=head->next;
       Node* s=head;
       while(f!=NULL and f->next!=NULL){
           f=f->next->next;
           s=s->next;
       }
       return s;
   }
   Node* Mergell(Node* head1,Node* head2){
      Node* dummy=new Node(0);
      Node* i=dummy;
      while(head1!=NULL and head2!=NULL){
          if(head1-><=head2->val){
              i->next=head1;
              head1=head1->next;
          }
          else{
              i->next=head2;
              head2=head2->next;
          }
      }
      if(head1==NULL){
          i->next=head2;
      }
      if(head2==NULL){
          i->next=head1;
      }
      return dummy->next;
   }
Node* mergeSort(Node* head) {
    // your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* mid=mid1(head);
    Node* a=head;
    Node* b=mid->next;
    mid->next=NULL;
    a=mergeSort(a);
    b=mergeSort(b);
    Node*  newnode=Mergell(a,b);
    return newnode;
    
}
