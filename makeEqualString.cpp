#include <bits/stdc++.h>
using namespace std;
//time complexity :O(N)
//space complexity :O(1)
bool canBeEqualByOneSwap(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) return false;
    int swapCount=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            swapCount++;
        }
        if(swapCount>2){
            return false;
        }
    } return true;

}

int main() {
    string s1 = "bank";
    string s2 = "kanb";

    if (canBeEqualByOneSwap(s1, s2))
        cout << "Yes, one swap can make them equal\n";
    else
        cout << "No, can't make equal with one swap\n";

    return 0;
}
