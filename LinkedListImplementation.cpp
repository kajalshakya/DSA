#include<bits/stdc++.h>
using namespace std;

// Node class represents a single element in the linked list
class Node{
public:
    int data;      // stores value
    Node* next;    // pointer to next node

    // Constructor
    Node(int val){
        data = val;
        next = NULL;
    }

    // Destructor to delete next nodes recursively
    ~Node(){
        // If there is a next node, delete it
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

// Linked List class
class List{
    Node* head;   // pointer to first node
    Node* tail;   // pointer to last node

public:
    // Constructor - initializes empty list
    List(){
        head = NULL;
        tail = NULL;
    }

    // Destructor - deletes entire list
    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    // Insert a node at the beginning (O(1))
    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){     // if list is empty
            head = tail = newNode;
        }
        else{
            newNode->next = head;  // link new node to current head
            head = newNode;        // update head
        }
    }

    // Insert a node at the end (O(1))
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){     // if list is empty
            head = tail = newNode;
        }
        else{
            tail->next = newNode;  // attach after current tail
            tail = newNode;        // update tail
        }
    }

    // Insert at a specific position (0-based indexing)
    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node* temp = head;

        // Move temp to (pos-1)
        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout << "Position is invalid" << endl;
                return;
            }
            temp = temp->next;
        }

        // Insert node after temp
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Print list in readable format
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Delete node from front (O(1))
    void pop_front(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;   // detach
        delete temp;
    }

    // Delete node from end (O(n))
    void pop_back(){
        if(head == NULL) return;

        // If only one node exists
        if(head->next == NULL){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        // Move to second-last node
        while(temp->next->next != NULL){
            temp = temp->next;
        }

        delete temp->next;   // delete last node
        temp->next = NULL;
        tail = temp;         // update tail
    }

    // Iterative search - returns index or -1
    int searchIte(int key){
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;   // not found
    }

    // Recursive helper function
    int helper(Node* temp, int key){
        if(temp == NULL) return -1;       // not found
        if(temp->data == key) return 0;   // found here

        int idx = helper(temp->next, key);
        if(idx == -1) return -1;          // not found in rest

        return idx + 1;                   // add 1 to index
    }

    // Recursive search wrapper
    int searchRec(int key){
        return helper(head, key);
    }
};

int main(){
    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();  // 1->2->3->4->5->NULL


    // // ll.push_back(4);
    // // ll.push_back(5);
    // // ll.printList();//1->2->3->4->->5-> null 

    // // ll.insert(100,2);
    // // ll.printList();//1->2->100->3->4->->5-> null 

    // // ll.pop_front();
    // // ll.printList();//1->2->null 

    // ll.pop_back();
    // ll.printList();//1->2->null 


    cout << ll.searchIte(7) << endl;  // using iterative search
    cout << ll.searchRec(4) << endl;  // using recursive search

    return 0;
}
