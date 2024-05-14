/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here
Node* temp=head;
  if(temp==NULL|| temp->next==NULL){
        return temp;
    } 
   
    while(temp!=NULL){
        if((temp->next!=NULL)  && temp->next->data==temp->data){
             Node* nextofnext=temp->next->next;
            Node* todelete=temp->next;
            delete(todelete);
           temp->next =nextofnext;
        } else {
       temp=temp->next;
        }
    }
    return head;
     

}
