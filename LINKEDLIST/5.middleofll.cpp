https://leetcode.com/problems/middle-of-the-linked-list/

 ListNode* middleNode(ListNode* head) {
         ListNode* f=head;
        ListNode* s=head;
        while(f!=NULL and f->next!=NULL){
            f=f->next->next;
            s=s->next;
        }
        return s;
    }
