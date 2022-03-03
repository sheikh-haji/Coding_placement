https://leetcode.com/problems/copy-list-with-random-pointer/

 Node* copyRandomList(Node* head) {
        Node* dummy=new Node(-1);
        Node* i=dummy;
        map<Node*,Node*> m;
        m.insert({NULL,NULL});
        Node* temp=head;
        while(temp!=NULL){
            i->next=new Node(temp->val);
            i=i->next;
            m.insert({temp,i});
            temp=temp->next;
        }
        i=dummy->next;
        temp=head;
        while(temp!=NULL){
            Node* r=temp->random;
            Node* y=m[r];
            i->random=y;
            i=i->next;
            temp=temp->next;
        }
        return dummy->next;
    }
