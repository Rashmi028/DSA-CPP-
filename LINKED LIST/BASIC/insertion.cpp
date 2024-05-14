#include<iostream>
using namespace std ;
class Node{
public:
int data ;
Node* next;
Node(int data){
   this->data=data;
   this->next=NULL;
}
};
//Insert at the beginning
void insertatfirst(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

//Insert at last
void insertattail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    
    tail->next=temp;
    tail=tail->next;
}

//Insert at middle 
void insertatmiddle(Node* &tail,Node* &head,int position,int d){
    Node* temp=head;
    int count=1;
    //if position is 1
     if(position==1){
        insertatfirst(head,d);
        return;
     }
    while(count<position-1){
        temp= temp->next;
        count++;
    }
    //if position is last
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
   
    Node* nodetoinsert= new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;


}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

int main(){
  
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail= head;
    print(head);
    insertatfirst(head,7);
    print(head);
    insertatfirst(head,15);
    print(head);
    insertattail(tail,8);
    print(head);
    insertattail(tail,9);
    print(head);
    insertatmiddle(tail,head,1,14);
    print(head);
    // cout<<head->data<<endl;
    // cout<<tail->data;
    return 0;
}