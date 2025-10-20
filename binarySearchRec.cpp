#include <bits/stdc++.h>
using namespace std;
int binSearch(int arr[],int low, int high,int key){
    //base case
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(key<arr[mid]){
        return binSearch(arr,low,mid-1,key);
    }else{
         return binSearch(arr,mid+1,high,key);
    }
}
    
int main() {
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int key =5;
    cout<<binSearch(arr,0,n-1,key);

    return 0;
}