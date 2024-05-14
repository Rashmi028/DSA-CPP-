//iterative approach
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL||head->next==NULL){
        return head;
    }
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* forward=NULL;
    LinkedListNode<int>* curr=head;
    while (curr != NULL) {
      forward = curr->next;
      curr->next = prev;
      prev = curr;
      curr = forward;
    }
    return prev;
}

//reverse kgroups

Node* kReverse(Node* head, int k) {

    if (head == nullptr) {
        return nullptr;
    }

    Node* next = nullptr;
    Node* curr = head;
    Node* prev = nullptr;
    int count = 0;

    // Reverse the first k nodes of the linked list
    while (curr != nullptr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
        return prev;
    }
    
    // Recursively call kReverse for the remaining list
    if (next != nullptr) {
        head->next = kReverse(next, k);
    }
    
    
}