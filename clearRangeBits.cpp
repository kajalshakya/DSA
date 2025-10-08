#include<bits/stdc++.h>
using namespace std;
int clearRangeBits(int num, int i, int j){
    int a=(~0)<<j+1;
    int b=(1<<i)-1;
    int bitmask=a|b;
    return (num&bitmask);
}

int main(){
    cout<<" after clearing bits :"<<clearRangeBits(31,1,3);
    return 0;
}