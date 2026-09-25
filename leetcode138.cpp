#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node* random;

    Node(int x) {
        val = x;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {

    if (head == NULL)
        return NULL;

    unordered_map<Node*, Node*> mp;

    Node* curr = head;

    // Create copy nodes
    while (curr != NULL) {

        mp[curr] = new Node(curr->val);

        curr = curr->next;
    }

    // Connect next and random
    curr = head;

    while (curr != NULL) {

        mp[curr]->next = mp[curr->next];
        mp[curr]->random = mp[curr->random];

        curr = curr->next;
    }

    return mp[head];
}

void printList(Node* head) {

    while (head != NULL) {

        cout << head->val << " ";

        head = head->next;
    }

    cout << endl;
}

int main() {

    Node* head = new Node(7);
    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    // Random pointers
    head->random = NULL;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head;

    Node* copy = copyRandomList(head);

    cout << "Original List: ";
    printList(head);

    cout << "Copied List: ";
    printList(copy);

    return 0;
}