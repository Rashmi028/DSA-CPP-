//Time complexity= O(N)
bool isCircular(Node* head){
    // Write your code here.
    if(head==NULL && head->next==NULL){
     return true;
    }
    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    else{
        return false;
    }
}

//index of the starting node of circular ll
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      if (head == nullptr||head->next==nullptr) { 
           return NULL;
        } 
        ListNode* slow = head; 
        ListNode* fast = head; 
        while (fast != nullptr && slow!= nullptr) { 
            fast=fast->next;
            if (fast!=NULL)
             { 
                fast=fast->next;
            } 
            slow=slow->next;
            if(fast==slow){
                 slow = head;
        while (slow != fast) {
          slow = slow->next;
          fast = fast->next;
        }
        return slow;
            };
      
    } ;
    return NULL;
};
 
};


