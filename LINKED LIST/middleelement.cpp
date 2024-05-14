/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int getlength(Node*head){
int count=0 ;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}

Node *findMiddle(Node *head) {
    // Write your code here
    Node* temp=head;
    int len=getlength(head);
    int mid=len/2;
    int curr=0;
    while(curr<mid){
     temp=temp->next;
     curr++;
    }
    return temp;
}


//optimised solution
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    if(head == NULL||head->next==NULL){
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
         fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
       
    }
     return slow;
    
}