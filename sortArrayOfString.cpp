#include<bits/stdc++.h>
using namespace std;
void merge(vector<string>&arr,int si,int mid,int ei){
    int i=si,j=mid+1;
    vector<string>temp;
    // merge two sorted halves
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
      // copy remaining elements
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    for(int k=si,x=0;k<=ei;k++){
        arr[k]=temp[x++];
    }
}
void mergeSort(vector<string>&arr, int si, int ei){
    //base case
    if(si>=ei){
        return;
    }
    int mid=si+(ei-si)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}

int main(){
    vector<string>arr={"sun","earth","mars","mercury"};
    mergeSort(arr,0,arr.size()-1);
    for(auto &i:arr){
        cout<<i<<" ";
    }
    return 0;
}
