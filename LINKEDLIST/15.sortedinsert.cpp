https://practice.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1
Node* func(Node* head,int data){
        Node* temp=head->next;
        while(temp->next!=head){
            temp=temp->next;
        }
        Node* newnode=new Node(data);
        newnode->next=head;
        temp->next=newnode;
        return newnode;
        
    }
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
       if(head==NULL ){
           return head;
       }
       Node* prev=NULL;
       Node* temp=head;
       while(temp->data<data){
           prev=temp;
           temp=temp->next;
       }
       if(temp==head){
           head=func(head,data);
           return head;
       }
       Node* newnode=new Node(data);
       newnode->next=temp;
       prev->next=newnode;
       
       return head;
    }
