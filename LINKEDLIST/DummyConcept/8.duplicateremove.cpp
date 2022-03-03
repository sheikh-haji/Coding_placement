https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* i=dummy;
        i->next=head;
        i=i->next;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val==i->val){
                temp=temp->next;
            }
            else{
                i->next=temp;
                i=i->next;
            }
        }
        i->next=temp;
        // if(i->next!=NULL and i->val==i->next->val){
        //     i->next=NULL;
        // }
        return dummy->next;
    }
