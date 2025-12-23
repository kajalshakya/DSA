#include <bits/stdc++.h>
using namespace std;
string res(string str){
    string str1 ="";
    str1+=toupper(str[0]);
    for(int i=1;i<str.length();i++){
        str1+=tolower(str[i]);
    }
    return str1;
}

int main() {
    string str="alice";
    cout<<res(str);

    return 0;
}