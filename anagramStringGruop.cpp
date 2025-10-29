#include <bits/stdc++.h>
using namespace std;
//time complexity:O(N*klogk)
//space complexity:O(N*k)


void groupAnagrams(vector<string>& arr) {
    // Map to store sorted string as key and group of anagrams as value
    unordered_map<string, vector<string>> mp;

    // Step 1: Group strings by their sorted version
    for (string s : arr) {
        string key = s;              // Copy the original string
        sort(key.begin(), key.end()); // Sort characters to form a key
        mp[key].push_back(s);         // Store the word under this sorted key
    }

    // Step 2: Print the groups
    for (auto& it : mp) {
        cout << it.first << " : ";
        for (auto& word : it.second)
            cout << word << " ";
        cout << endl;
    }
}

int main() {
    vector<string> arr = {"ate", "bat", "cat", "tac", "act", "tab"};
    groupAnagrams(arr);
    return 0;
}
