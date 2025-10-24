#include<bits/stdc++.h>
using namespace std;
int countInRange(vector<int>&arr,int num,int si,int ei){
    int count=0;
    for(int i=si;i<=ei;i++){
        if(arr[i]==num){
            count++;
        }
    }
    return count;
}
int majorityElementRec(vector<int>&arr,int si,int ei){
    //base case if the size of array is 1
    if(si==ei){
        return arr[si];
    }
    //recurse left and right halves of this array
    int mid=si+(ei-si)/2;
    int left=majorityElementRec(arr,si,mid);
    int right=majorityElementRec(arr,mid+1,ei);

    //if two halves agree on majority element.return it
    if(left==right){
        return left;
    }
    //otherwise count each element and return the winner
    int leftCount=countInRange(arr,left,si,ei);
    int rightCount=countInRange(arr,right,si,ei);

    return leftCount>rightCount?left:right;
}
int majorityElement(vector<int>&arr){
    return majorityElementRec(arr,0,arr.size()-1);
}
int main(){
    vector<int>arr={2,2,1,1,1,2,2};
    cout<<"majority elment is "<<majorityElement(arr);
    return 0;
}