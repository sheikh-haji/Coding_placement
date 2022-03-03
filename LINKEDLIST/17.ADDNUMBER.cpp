https://leetcode.com/problems/add-two-numbers/
 int lengthfind(ListNode* head){
        int count=0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
       void insert_at_end(ListNode*& head,int n){
        if(n==0){
            // return head;
            return;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* i=dummy;
        int t=1;
        while(t<n){
            i->next=new ListNode(0);
            i=i->next;
            t++;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=dummy;
        // return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1=lengthfind(l1);
        int n2=lengthfind(l2);
        if(n1>n2){
            insert_at_end(l2,n1-n2);
        }
        else{
            insert_at_end(l1,n2-n1);
        }
        ListNode* dummy=new ListNode(0);
        ListNode* i=dummy;
        int sum=0;
        int carry=0;
        n2=lengthfind(l1);
        n1=lengthfind(l1);
        // cout<<n1<<" "<<n2<<endl;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        while(temp1!=NULL and temp2!=NULL){
            sum=(temp1->val)+(temp2->val)+carry;
            i->next=new ListNode(sum%10);
            i=i->next;
            carry=sum/10;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        if(carry>0){
            i->next=new ListNode(carry);
            i=i->next;
        }
        return dummy->next;
    }

https://leetcode.com/problems/add-two-numbers-ii/


 int lengthfind(ListNode* head){
        int count=0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
       void insert_at_front(ListNode*& head,int n){
        if(n==0){
            // return head;
            return;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* i=dummy;
        int t=1;
        while(t<n){
            i->next=new ListNode(0);
            i=i->next;
            t++;
        }
        i->next=head;
           head=dummy;
        // return head;
    }
    void reverse(ListNode*& head ){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* n=NULL;
        while(curr!=NULL){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        head=prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1=lengthfind(l1);
        int n2=lengthfind(l2);
        if(n1>n2){
            insert_at_front(l2,n1-n2);
        }
        else{
            insert_at_front(l1,n2-n1);
        }
        ListNode* dummy=new ListNode(0);
        ListNode* i=dummy;
        int sum=0;
        int carry=0;
        n2=lengthfind(l1);
        n1=lengthfind(l1);
        cout<<n1<<" "<<n2<<endl;
        
        reverse(l1);
        reverse(l2);
        cout<<l1->val<<" "<<l2->val<<endl;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        while(temp1!=NULL and temp2!=NULL){
            sum=(temp1->val)+(temp2->val)+carry;
            i->next=new ListNode(sum%10);
            i=i->next;
            carry=sum/10;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        if(carry>0){
            i->next=new ListNode(carry);
            i=i->next;
        }
        dummy=dummy->next;
        reverse(dummy);
        return dummy;
    }
