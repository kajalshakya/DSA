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

bool isPalindrome(ListNode* head) {

    ListNode* slow = head;
    ListNode* fast = head;

    // Find middle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    ListNode* prev = NULL;

    while (slow != NULL) {

        ListNode* next = slow->next;

        slow->next = prev;

        prev = slow;
        slow = next;
    }

    // Compare both halves
    ListNode* left = head;
    ListNode* right = prev;

    while (right != NULL) {

        if (left->val != right->val)
            return false;

        left = left->next;
        right = right->next;
    }

    return true;
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
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    cout << "List: ";
    printList(head);

    if (isPalindrome(head))
        cout << "Palindrome: Yes" << endl;
    else
        cout << "Palindrome: No" << endl;

    return 0;
}