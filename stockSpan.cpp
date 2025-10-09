#include <bits/stdc++.h>
using namespace std;
vector<int> result(vector<int>&arr){
    vector<int>result(arr.size(),1);
    
    for(int i=arr.size()-1;i>=0;i--){
        int count=1,j=i-1;
        while(arr[i]>=arr[j] && j>=0){
            count++;
            j--;
        }
        result[i]=count;
    
      
    }
     return result;
    
}

int main() {
    vector<int>arr={100,80,60,70,60,75,85};
    vector<int> ans=result(arr);
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}