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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }  

        int count = 0;
        ListNode* prev = nullptr;
        ListNode* forward = nullptr;
        ListNode* curr = head;

        // Reverse the first k nodes
        while (curr != nullptr && count < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        // Recursively reverse the next group

              if (count < k) {
            ListNode* temp = prev;
            prev = nullptr;
            while (temp != nullptr) {
                forward = temp->next;
                temp->next = prev;
                prev = temp;
                temp = forward;
            }
        } else {
            // Recursively reverse the next group
            if (forward != nullptr) {
                head->next = reverseKGroup(forward, k);
            }
        }
       
        return prev;
    }
};

int main() {
    // Example usage
    Solution solution;
    
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 3;  // Reverse in groups of 2
    
    // Reverse the linked list in groups of k
    head = solution.reverseKGroup(head, k);

    // Output the result
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }

    // Free memory
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
