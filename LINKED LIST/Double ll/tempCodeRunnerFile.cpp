void insertatfirst(Node* &head,int data){
   Node* temp= new Node(data);
   temp->next=head;
   head->prev=temp;
   head=temp;
}

void insertattail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertatmiddle(Node* &tail,Node* &head,int position,int data ){
    Node* temp=head;
    int count=1;
    //if position is 1
     if(position==1){
        insertatfirst(head,data);
        return;
     }
       while(count<position-1){
        temp= temp->next;
        count++;
    }
    //if position is last
    if(temp->next==NULL){
        insertattail(tail,data);
        return;
    }
    Node* nodetoinsert=new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    
}

//traverse
void print(Node* head){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}
