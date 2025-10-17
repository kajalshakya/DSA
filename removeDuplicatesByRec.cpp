#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(string str, string ans, int i, bool mp[26]) {
    // base case
    if (i == str.size()) {
        cout << "ans1: " << ans << endl;
        return;
    }
    char ch = str[i];
    int idx = ch - 'a';
    if (mp[idx]) {
        removeDuplicates(str, ans, i + 1, mp);
    } else {
        mp[idx] = true;
        removeDuplicates(str, ans + ch, i + 1, mp);
    }
}

void removeDuplicates2(string str, string ans2, bool mp2[26]) {
    // base case
    if (str.size() == 0) {
        cout << "ans2: " << ans2 << endl;
        return;
    }
    int n = str.size();
    char ch = str[n - 1];
    int idx = ch - 'a';
    str = str.substr(0, n - 1); // remove last char
    if (mp2[idx]) {
        removeDuplicates2(str, ans2, mp2);
    } else {
        mp2[idx] = true;
        removeDuplicates2(str, ch + ans2, mp2); // add in front to maintain order
    }
}

int main() {
    string str = "kajalshakya";
    string ans = "";
    string ans2 = "";
    
    bool mp[26] = {false};
    bool mp2[26] = {false};

    removeDuplicates(str, ans, 0, mp);
    removeDuplicates2(str, ans2, mp2);

    return 0;
}
