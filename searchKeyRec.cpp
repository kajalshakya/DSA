#include <bits/stdc++.h>
using namespace std;
vector<int> findAllIndex(int arr[],int n,int i,int key){
    if(i==n){
        return {};
    }
    vector<int> result = findAllIndex(arr, n, i + 1, key);
    if(arr[i]==key){
        result.insert(result.begin(),i);
    }
    return result;
    
}

    
int main() {
    int arr[]={3,2,4,5,6,2,7,2,2};
    int n=9;
    int key =2;
   vector<int> ans = findAllIndex(arr, n, 0, key);
   for(auto i: ans){
       cout<<i<<" ";
   }
   
    return 0;
}