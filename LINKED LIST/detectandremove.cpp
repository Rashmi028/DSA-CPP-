#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* removeLoop(Node* head) {
    Node* fast = head;
    Node* slow = head;
    Node* temp = head;

    if (temp == NULL) {
        return temp;
    }

    while (fast != NULL && slow != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }
        slow = slow->next;
        if (fast == slow) {
            fast->next = NULL;
            slow = temp;
            return temp;
        }
    }

    return temp;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Sample input: 6 2
    int n, m;
    std::cin >> n >> m;

    // Creating linked list: 1->2->3->4->5->6
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 1; i <= n; ++i) {
        Node* newNode = new Node(i);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Creating loop at m-th node
    Node* loopNode = head;
    for (int i = 1; i < m; ++i) {
        loopNode = loopNode->next;
    }
    tail->next = loopNode;

    // Removing loop
    head = removeLoop(head);

    // Printing the linked list
    printList(head);

    return 0;
}
