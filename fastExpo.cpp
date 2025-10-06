#include<bits/stdc++.h>
using namespace std;
// time complexity :O(log2n)
void fastExpo(int x,int n){
    int ans =1;
    while(n>0){
        int lastBit=n&1;
        if(lastBit){
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }
    cout<<"ans: "<<ans;
}
int main(){
    fastExpo(3,5);

}