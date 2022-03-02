https://leetcode.com/problems/reverse-linked-list/


ListNode* reverseList(ListNode* head) {
          ListNode* c,*prevptr,*nextptr;
          c=head;
          prevptr=NULL;
          nextptr=NULL;

        while(c!=NULL)
       {
	         nextptr=c->next;
           c->next=prevptr;
	         prevptr=c;
	         c=nextptr;
         }
     return prevptr;
    }
};

https://leetcode.com/problems/reverse-linked-list-ii/

ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        int count=1;
        ListNode* leftside=head;
        ListNode* leftprev=NULL;
        while(count<left){
            leftprev=leftside;
            leftside=leftside->next;
            count++;
        }
        
            ListNode* rightside=head;
            ListNode* rightnext=NULL;
        count=1;
        while(count<right){
            rightside=rightside->next;
            count++;
        }
        rightnext=rightside->next;
        ListNode* prev=leftprev;
        ListNode*curr=leftside;
        ListNode* n=leftside;
        while(curr!=rightnext){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
//         full reverse linkedlist
        if(n==NULL and leftprev==NULL){
            return prev;
        }
//         mid range
     else if(leftprev!=NULL and rightnext!=NULL){
         ListNode* start=(leftprev==NULL)?leftside:leftprev->next;
        start->next=rightnext;
        leftprev->next=prev;
     }
//         left to mid range
        else if(leftprev==NULL){
             ListNode* start=(leftprev==NULL)?leftside:leftprev->next;
            start->next=rightnext;
            return prev;
        }
//         right to midrange
        else{
            ListNode* start=(leftprev==NULL)?leftside:leftprev->next;
            leftprev->next=prev;
            start->next=rightnext;
        }
       
        
        return head;
    }

