#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int x) {
        val = x;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

Node* flatten(Node* head) {

    if (head == NULL)
        return head;

    Node* curr = head;

    while (curr != NULL) {

        if (curr->child != NULL) {

            Node* child = curr->child;
            Node* next = curr->next;

            curr->next = child;
            child->prev = curr;

            Node* tail = child;

            while (tail->next != NULL) {
                tail = tail->next;
            }

            if (next != NULL) {
                tail->next = next;
                next->prev = tail;
            }

            curr->child = NULL;
        }

        curr = curr->next;
    }

    return head;
}

void printList(Node* head) {

    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;

    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    // Child list: 4 -> 5
    Node* child = new Node(4);
    child->next = new Node(5);
    child->next->prev = child;

    head->next->child = child;

    cout << "Before Flattening: ";
    printList(head);

    flatten(head);

    cout << "After Flattening: ";
    printList(head);

    return 0;
}