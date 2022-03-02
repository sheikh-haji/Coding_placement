https://leetcode.com/problems/rotate-list/


 pair<int,ListNode*> count(ListNode* head){
        int c=0;
        ListNode* temp=NULL;
        while(head!=NULL){
            temp=head;
            head=head->next;
            c++;
        }
        return {c,temp};
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        pair<int,ListNode*> size=count(head);
      
        int n=size.first;
        if(k%n==0){
            return head;
        }
        ListNode* tail=size.second;
        // cout<<n<<" "<<k<<endl;
          k=k%n;
        int temp=n-k;
        int c=1;
        ListNode* t=head;
        while(c<temp){
            t=t->next;
            c++;
        }
        ListNode* tnext=t->next;
        t->next=NULL;
        tail->next=head;
        return tnext;
        
    }
