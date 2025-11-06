#include <bits/stdc++.h>
using namespace std;
int countSetBits(string s){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') c++;
    }
    return c;
} 
int result(vector<string>&arr){
    int sum=0;
    vector<int>v;
    for(int i=0;i<arr.size();i++){
        int ans=countSetBits(arr[i]);
        if(ans!=0) v.push_back(ans);
     }
    for(int i=0;i<v.size()-1;i++){
        sum+=v[i]*v[i+1];
    }   
    return sum;   
}
int main() {
    vector<string>arr={"111","0000","10100","10000"};
    cout<<"result :"<<result(arr);
    return 0;
}



    
    

