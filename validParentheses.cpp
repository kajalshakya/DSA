#include <bits/stdc++.h>
using namespace std;

bool isValidParentheses(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            if ((c == ')' && st.top() != '(') ||
                (c == '}' && st.top() != '{') ||
                (c == ']' && st.top() != '['))
                return false;
            st.pop();
        }
    }
    
    return st.empty();
}

int main() {
    string s = "{[()]}";
    
    if (isValidParentheses(s)) {
        cout << "Valid parentheses\n";
    } else {
        cout << "Invalid parentheses\n";
    }
    
    return 0;
}
