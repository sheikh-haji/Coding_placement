https://leetcode.com/submissions/detail/432666017/
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            count1++;
            temp1=temp1->next;
        }
        int count2=0;
        while(temp2!=NULL){
            count2++;
            temp2=temp2->next;
        }
        int dif=abs(count1-count2);
        temp1=headA;
        temp2=headB;
        if(count1>count2){
            int i=0;
            while(i<dif){
                temp1=temp1->next;
                i++;
            }
        }
        else{
            int i=0;
            while(i<dif){
                temp2=temp2->next;
                i++;
            }
        }
        while(temp1!=NULL and temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }/////
