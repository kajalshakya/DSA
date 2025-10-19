#include<bits/stdc++.h>
using namespace std;
void binaryString(int n, int lastPlace,string ans){
    //base case
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    // if lastPlace is 0
    if(lastPlace!=1){
        binaryString(n-1,0,ans+ '0');
        binaryString(n-1,1,ans+ '1');
    }else {// lastPlace is 1
        binaryString(n-1,0,ans+ '0');

    }
}
int main(){
    string ans="";
    binaryString(3,0,ans);
    return 0;
}