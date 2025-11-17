#include<bits/stdc++.h>
using namespace std;
  int titleToNumber(string s) {
        long long result = 0;
        for (char c : s) {
            result = result * 26 + (c - 'A' + 1);
        }
        return result;
    }

int main(){
    cout<<"ans:"<<titleToNumber("AB");
    return 0;
}

