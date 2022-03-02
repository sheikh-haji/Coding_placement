https://leetcode.com/problems/palindrome-linked-list/

1.reverse second half
2.traverse simultaneously till head2 is NULL


 ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* n=NULL;
        ListNode* prev=NULL;
        while(curr!=NULL){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* f=head;
        ListNode* s=head;
        while(f!=NULL and f->next!=NULL){
            f=f->next->next;
            s=s->next;
        }
       ListNode* head2=reverse(s);
        while(head2!=NULL){
            if(head2->val!=head->val){
                return false;
            }
            head2=head2->next;head=head->next;
        }
        return true;
    }
