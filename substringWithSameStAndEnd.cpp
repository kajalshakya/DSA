#include <bits/stdc++.h>
using namespace std;
vector<string>getSubStrings(string s){
    vector<string>subs;
    for(int i=0;i<s.size();++i){
        for(int j=i;j<s.size();++j){
            if(s[i] == s[j]){
                subs.push_back(s.substr(i, j - i + 1));
            }
        }
    } return subs;
}


int main() {
    string s = "abca";
    cout << "All substrings:\n";
    vector<string>res=getSubStrings(s);
    for(auto i:res){
        cout<<i<<endl;
    }
    return 0;
}
