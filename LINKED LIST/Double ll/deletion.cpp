#include<iostream>
using namespace std ;
class Node{
public:
int data ;
Node* next;
Node* prev;
Node(int data){
   this->data=data;
   this->next=NULL;
   this->prev=NULL;
}
};
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

void deletenode(int position, Node* &head){
    
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* previous=NULL;
    int count=1;
     while(count<=position-1){
        previous=curr;
        curr= curr->next;
        count++;
    }
    curr->next->prev=previous;
    previous->next=curr->next;
    delete curr;

    }

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
int searchInLinkedList(Node* head, int k) {
    // Write your code here.
    for (int i=head;i<head->next!=NULL;i++){
        if(i==head->data){
            return 1;
        }
        else{
            return 0;
        }
    }
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
    deletenode(2,head);
    print(head);
    searchInLinkedList(head,7);
}