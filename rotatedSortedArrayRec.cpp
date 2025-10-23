#include<bits/stdc++.h>
using namespace std;
//time complexity:O(logN)
int search(int arr[],int si,int ei,int target){
    //base case 
    if(si>ei){
        return -1;
    }
    int mid=si+(ei-si)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[si]<=arr[mid]){//line 1
        if(arr[si]<=target && target<=arr[mid]){
            //left half
            return search(arr,si,mid-1,target);
        }
        else{
            //right half
            return search(arr,mid+1,ei,target);
        }
    }
    else{//line2
        if(arr[mid]<=target && target<=arr[ei]){
            //right half
            return search(arr,mid+1,ei,target);
        }
        else{//left half
            return search(arr,si,mid-1,target);
        }
        }
    }

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"index :"<<search(arr,0,n-1,0);
    return 0;
}