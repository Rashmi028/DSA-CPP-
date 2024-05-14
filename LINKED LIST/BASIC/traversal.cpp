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
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
    }
}

int main(){
  
    Node* node1= new Node(10);
    Node* node2= new Node(7);
    Node* node3= new Node(6);
    // node1->data=10;
    node1->next=node2;
    // node2->data=7;
    node2->next=node3;
    node3->next=NULL;
    Node* head= node1;

    print(head);

    return 0;
}