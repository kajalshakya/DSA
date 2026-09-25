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

ListNode* detectCycle(ListNode* head) {

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {

            ListNode* curr = head;

            while (curr != slow) {
                curr = curr->next;
                slow = slow->next;
            }

            return curr;
        }
    }

    return NULL;
}

int main() {

    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Create cycle starting at node 2
    head->next->next->next->next = head->next;

    ListNode* cycleStart = detectCycle(head);

    if (cycleStart != NULL)
        cout << "Cycle starts at node: " << cycleStart->val << endl;
    else
        cout << "No cycle" << endl;

    return 0;
}