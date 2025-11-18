#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // Function to reverse a linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    // Function to check if the linked list is a palindrome
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the list
        ListNode* second = reverseList(slow);
        ListNode* first = head;

        // Compare the first and second halves
        while (second) {
            if (first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }
};

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Example list: 1 -> 2 -> 2 -> 1
    int arr[] = {1, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    ListNode* head = createList(arr, n);

    cout << "Linked List: ";
    printList(head);

    if (sol.isPalindrome(head)) {
        cout << "The list is a palindrome." << endl;
    } else {
        cout << "The list is not a palindrome." << endl;
    }

    return 0;
}
