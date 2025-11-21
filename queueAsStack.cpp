#include <bits/stdc++.h>
using namespace std;

class QueueUsingStacks {
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    int dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    QueueUsingStacks q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Dequeue: " << q.dequeue() << endl; 
    cout << "Peek: " << q.peek() << endl;       

    q.enqueue(40);
    cout << "Dequeue: " << q.dequeue() << endl; 
    cout << "Dequeue: " << q.dequeue() << endl; 
    cout << "Dequeue: " << q.dequeue() << endl;  
    cout << "Dequeue: " << q.dequeue() << endl;  

    return 0;
}
