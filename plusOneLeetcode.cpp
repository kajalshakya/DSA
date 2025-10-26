#include<bits/stdc++.h>
using namespace std;
//Time Complexity: O(n)
//Space Complexity: O(1)
vector<int>plusOne(vector<int>&digits){
    int carry=1,sum=0;
    for(int i=digits.size()-1;i>=0;i--){
        sum=digits[i]+carry;
        digits[i]=sum%10;
        carry=sum/10;
    }
    if(carry){
        digits.insert(digits.begin(),1);
    }
    return digits;
}
int main(){
    vector<int>digits={9,9,9};
    vector<int>result=plusOne(digits);
    for(int i:digits){
        cout<<i<<" ,";
    }
    return 0;
}