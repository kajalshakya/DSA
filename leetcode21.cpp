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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;

    while (list1 != NULL && list2 != NULL) {

        if (list1->val <= list2->val) {
            curr->next = list1;
            list1 = list1->next;
        }
        else {
            curr->next = list2;
            list2 = list2->next;
        }

        curr = curr->next;
    }

    if (list1 != NULL)
        curr->next = list1;
    else
        curr->next = list2;

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

    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    ListNode* result = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(result);

    return 0;
}