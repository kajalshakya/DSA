#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;

            
           else if ((st.top() == '(' && c == ')') ||
                (st.top() == '[' && c == ']') ||
                (st.top() == '{' && c == '}')) {
                st.pop();
            } else {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s = "{[()]}(";  

    if (isValid(s)) {
        cout << "Valid parentheses\n";
    } else {
        cout << "Invalid parentheses\n";
    }

    return 0;
}
