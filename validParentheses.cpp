#include <bits/stdc++.h>
using namespace std;

bool isValidParentheses(string s) {
    stack<char> st;
    
   for(char ch:s){
    if(ch=='(' || ch=='['|| ch=='{'){
        st.push(ch);
    }
    else{
        if(st.empty()){
            return false;
        }
        else if(st.top()=='(' && ch==')' || st.top()=='[' && ch==']' || st.top()=='{' && ch=='}'){
            st.pop();
        }
        else{
            return false;
        }
    }
   } return st.empty();
}


int main() {
    string s = "{[()gi]}";
    
    if (isValidParentheses(s)) {
        cout << "Valid parentheses\n";
    } else {
        cout << "Invalid parentheses\n";
    }
    
    return 0;
}
