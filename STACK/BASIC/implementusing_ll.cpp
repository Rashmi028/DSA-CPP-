#include<iostream>
using namespace std;
class Node{
public:
int data ;
Node* next;
Node(int data){
   this->data=data;
   this->next=NULL;
}
 
 
};
void push(Node* &tail,int d){
    Node* temp = new Node(d);
     tail->next=temp;
     tail=tail->next;
 }
int pop(Node* &tail,Node* head){
   tail=head;
while(tail->next->next!=NULL){
    tail=tail->next;
}
   tail->next=NULL;
//    cout<<tail->data<<endl;
 }
 
 int peek(Node* head){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<< temp->data<<endl;
 }

bool isempty(Node* head){
    Node* temp=head;
    if(temp==NULL){
        cout<<"true";
    }
    else{
        cout<< "false";
    }
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
    push(tail,22);
    push(tail,34);
    push(tail,45);
    push(tail,44);
    print(head);
    pop(tail,head);
    print(head);
    // pop(tail,head);
    // print(head);
    peek(head);
    isempty(head);
    // cout<<head->data<<endl;
    // cout<<tail->data;
    return 0;
}