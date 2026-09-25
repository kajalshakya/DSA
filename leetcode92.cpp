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

ListNode* reverseBetween(ListNode* head, int left, int right) {

    if (head == NULL || left == right)
        return head;

    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* prev = dummy;

    for (int i = 1; i < left; i++) {
        prev = prev->next;
    }

    ListNode* curr = prev->next;

    for (int i = 0; i < right - left; i++) {

        ListNode* next = curr->next;

        curr->next = next->next;

        next->next = prev->next;

        prev->next = next;
    }

    return dummy->next;
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

    cout << "Original List: ";
    printList(head);

    head = reverseBetween(head, 2, 4);

    cout << "After Reversal: ";
    printList(head);

    return 0;
}