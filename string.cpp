#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(char arr[],int n){
    int st=0,end=n-1;
    while(st,end){
        if(arr[st++]!= arr[end--]){
            cout<<" not a palindrome ";
            return false;
        }
    }cout<< " it is a valid palindrome ";
     return true;
}


int main(){
    char arr[]={"abba"};
    cout<<isPalindrome(arr,strlen(arr));
   
    return 0;
}