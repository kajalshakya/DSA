#include<bits/stdc++.h>
using namespace std;
int countSubstr(string str,int i,int j,int n){
    //base case
    if(n==1)return 1;
    if(n<=0)return 0;
    int res=countSubstr(str,i,j-1,n-1)+countSubstr(str,i+1,j,n-1)-countSubstr(str,i+1,j-1,n-2);
    if(str[i]==str[j]){
        res++;
    }
    return res;

}
int main(){
    string str={"abcab"};
    int n=str.size();
    cout<<countSubstr(str,0,n-1,n);
}