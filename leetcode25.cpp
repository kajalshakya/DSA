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

ListNode* reverseKGroup(ListNode* head, int k) {

    if (head == NULL || k == 1)
        return head;

    ListNode* curr = head;

    // Check if k nodes are available
    for (int i = 0; i < k; i++) {

        if (curr == NULL)
            return head;

        curr = curr->next;
    }

    // Reverse first k nodes
    ListNode* prev = NULL;
    curr = head;

    for (int i = 0; i < k; i++) {

        ListNode* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

    // Connect with remaining list
    head->next = reverseKGroup(curr, k);

    return prev;
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

    head = reverseKGroup(head, k);

    cout << "After K-Group Reversal: ";
    printList(head);

    return 0;
}