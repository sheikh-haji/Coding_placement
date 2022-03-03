https://leetcode.com/problems/swap-nodes-in-pairs/

 ListNode* swapPairs(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* prev=dummy;//always points tail of previous ll
        ListNode* i=dummy;
        ListNode* t=head;
        i->next=head;
        i=head;
        while(i!=NULL and i->next!=NULL and t->next!=NULL){
            t=i->next;
            i->next=t->next;
            t->next=i;
            prev->next=t;
            prev=i;
            i=i->next;
        }
        return dummy->next;
    }
