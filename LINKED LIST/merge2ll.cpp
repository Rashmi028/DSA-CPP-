#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1==NULL || list2==NULL){
        return NULL;
       }
       ListNode* merge;
       ListNode* tail = merge;
    //    ListNode* head=list2;

       while(list1!=NULL && list2!=NULL){
        if(list1->val >= list2->val){
            tail->next=list2;
            list2=list2->next;
        }
        else{
         tail->next=list1;
         list1=list1->next;
        }
        tail=tail->next;
       }
    //    if (list1 != nullptr) {
    //         tail->next = list1;
    //     } else {
    //         tail->next = list2;
    //     }
    //    return merge->next;
    return merge->next ;
        };
};

int main() {
    // Example usage
    Solution solution;

    // Create two sorted linked lists
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    // Merge the two sorted lists
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Output the merged list
    ListNode* temp = mergedList;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    
    // Free memory
    while (mergedList != nullptr) {
        ListNode* temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }
    delete list1;
    delete list2;

    return 0;
}
