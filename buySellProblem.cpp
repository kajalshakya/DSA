#include<bits/stdc++.h>
using namespace std;
void maxProfit(int prices[],int n){
    int minprice=INT_MAX;
    int profit=0;
    for(int i=0;i<n;i++){
        if(prices[i]<minprice){
            minprice=prices[i];
        }
        else if(prices[i]-minprice>profit){
            profit=prices[i]-minprice;
        }
    }cout<<"profit : "<<profit;
    
}
int main(){
    int prices[6]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
    return 0;
}