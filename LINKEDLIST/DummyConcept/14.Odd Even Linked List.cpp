https://leetcode.com/problems/odd-even-linked-list/
ListNode* oddEvenList(ListNode* head) {
        ListNode* odddummy=new ListNode(0);
        ListNode* evendummy=new ListNode(0);
        int c=0;
        ListNode*t=head,*i=odddummy,*j=evendummy;
        while(t!=NULL){
            c++;
            if(c%2==0){
                j->next=t;
                t=t->next;
                j=j->next;
            }
            else{
                i->next=t;
                t=t->next;
                i=i->next;
            }
        }
        j->next=NULL;
        i->next=evendummy->next;
        return odddummy->next;
    }
