#include <bits/stdc++.h>
using namespace std;
//time complexity : O(N)
//space complexity : O(1)
bool isAnagram(const string &str1, const string &str2) {
    if (str1.length() != str2.length()) {
        cout << "Not a valid anagram\n";
        return false;
    }

    int freq[26] ={0};

    // Count frequency of characters in str1
    for (char ch : str1) {
        freq[ch]++;
    }

    // Check characters in str2
    for (char ch : str2) {
        freq[ch]--;
        if(freq[ch]<0){
            cout<<"Not a valid anagram\n";
        } 

    }

    cout << "Valid anagram\n";
    return true;
}

int main() {
    string str1 = "anagram";
    string str2 = "nagaram";

    isAnagram(str1, str2);

    return 0;
}
