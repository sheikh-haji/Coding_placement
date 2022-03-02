https://leetcode.com/problems/remove-nth-node-from-end-of-list

ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL ){
            return NULL;
        }
       ListNode* f=head;
       ListNode* s=head;
       int c=1;
       while(f!=NULL and c<=n){
           f=f->next;
           c++;
       }
       ListNode* prev=s;
       while(f!=NULL){
           prev=s;
           s=s->next;
           f=f->next;
       }
        if(s==head){
            return head->next;
        }
       prev->next=s->next;
    s->next=NULL;
    // delete(s);
       return head;
    }
