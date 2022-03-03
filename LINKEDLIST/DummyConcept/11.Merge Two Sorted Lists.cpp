https://leetcode.com/problems/merge-two-sorted-lists/


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummy=new ListNode(-1);
        ListNode* i=dummy;
        ListNode* t1=list1;
        ListNode* t2=list2;
        while(t1!=NULL and t2!=NULL){
            if(t2->val<=t1->val){
                i->next=t2;
                t2=t2->next;
            }
            else{
                i->next=t1;
                t1=t1->next;
            }
            i=i->next;
        }
        if(t1==NULL){
            i->next=t2;
        }
        else{
            i->next=t1;
        }
        return dummy->next;
    }
