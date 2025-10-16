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
//first occurence
int firstOccurence(vector<int>&v,int target,int i){
    if(i==v.size()) return -1;

    if(v[i]==target) return i;
    return firstOccurence(v,target,i+1);
}
//last occurence
int lastOccurence(vector<int>&v,int target,int i){
    if(i==v.size()) return -1;
    int idx=lastOccurence(v,target,i+1);
    if(idx==-1 && v[i]==target){
        return i;
    }
    return idx;
    
}
int main(){
    cout<<fibbonaci(8)<<endl;
    int arr[]={1,3,2,4,5};
    vector<int>v={1,2,3,3,3,4,5};
    cout<<isSorted(arr,5,0)<<endl;

    cout<<firstOccurence(v,3,0)<<endl;
    cout<<lastOccurence(v,3,0)<<endl;
    return 0;
}