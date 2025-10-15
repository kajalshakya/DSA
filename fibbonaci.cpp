#include<bits/stdc++.h>
using namespace std;
//check Nth fibbonaci
int fibbonaci(int n){ 
    vector<int>v;
    if(n==0 || n==1){
        return n;
    }

    return fibbonaci(n-1)+fibbonaci(n-2);

}
// check array is sorted or not
bool isSorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,n,i+1);
}
int main(){
    // cout<<fibbonaci(8);
    int arr[]={1,3,2,4,5};
    cout<<isSorted(arr,5,0);
    return 0;
}