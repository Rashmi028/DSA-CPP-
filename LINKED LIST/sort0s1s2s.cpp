#include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// ListNode* sortList(ListNode* head) {
//     ListNode* temp=head;
//     int zero=0;
//     int one=0;
//     int two=0;
//     if(temp==NULL || temp->next==NULL){
//         return temp;
//     }
//     while(temp!=NULL){
//         if(temp->val==0){
//             zero++;
//         }
//         else if(temp->val==1){
//             one++;
//         }
//         else{
//          two++;
//         }
//         temp=temp->next;
//     }
//     temp=head;
//    while(temp!=NULL){
//     if(zero!=0){
//         temp->val=0;
//         zero--;
//     }
//     else if(one!=0){
//         temp->val=1;
//         one--;
//     }
//      else if(two!=0){
//         temp->val=2;
//         two--;
//     }
//     temp=temp->next;
//    }
//      return head;

// }

ListNode* sortList(Node* head){
    ListNode* temp =head;
    ListNode* zero=head;
    ListNode* one=head;
    ListNode* two=head;
    if(temp==NULL){
        return temp;
    }
    while(temp!=NULL){
        if(temp->val==0){
          zero->val=temp->val  
        }
    }
}


// Function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
   cout << endl;
}

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);
    head->next->next->next->next = new ListNode(2);

    cout << "Original list: ";
    printList(head);

    head = sortList(head);

    cout << "Sorted list: ";
    printList(head);

    return 0;
}
