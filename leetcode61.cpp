#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* rotateRight(ListNode* head, int k) {

    if (head == NULL || head->next == NULL || k == 0)
        return head;

    // Find length and last node
    int n = 1;
    ListNode* tail = head;

    while (tail->next != NULL) {
        tail = tail->next;
        n++;
    }

    // Avoid unnecessary rotations
    k = k % n;

    if (k == 0)
        return head;

    // Find new tail
    int steps = n - k;
    ListNode* newTail = head;

    for (int i = 1; i < steps; i++) {
        newTail = newTail->next;
    }

    // New head is after new tail
    ListNode* newHead = newTail->next;

    // Break the list
    newTail->next = NULL;

    // Connect old tail to old head
    tail->next = head;

    return newHead;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    cout << "Original List: ";
    printList(head);

    head = rotateRight(head, k);

    cout << "Rotated List: ";
    printList(head);

    return 0;
}