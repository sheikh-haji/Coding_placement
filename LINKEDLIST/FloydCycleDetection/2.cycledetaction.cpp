https://leetcode.com/problems/linked-list-cycle

 bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL){
            return false;
        }
        if(head->next==head){
            return true;
        }
        ListNode* s=head;
        ListNode* f=head->next;
        while(f!=s and f!=NULL and f->next!=NULL ){
            f=f->next->next;
            s=s->next;
            if(s==f){
                return true;
            }
        }
        return false;
    }
   

 https://leetcode.com/problems/linked-list-cycle-ii/
  
  ListNode *detectCycle(ListNode *head) {
           if(head==NULL or head->next==NULL){
            return NULL;
        }
        if(head->next==head){
            return head;
        }
        ListNode* s=head;
        ListNode* f=head;
        while(f!=NULL and f->next!=NULL ){
            f=f->next->next;
            s=s->next;
            if(s==f){
                break;
            }
        }
        if(f==NULL or f->next==NULL){
            return NULL;
        }
       s=head;
        while(s!=f){
            s=s->next;
            f=f->next;
            
        }
        return s;
    }
