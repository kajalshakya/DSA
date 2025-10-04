#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices){
    int minPrice=INT_MAX;
    int profit =0;
    for(int i=0 ;i<prices.size();i++){
        if(prices[i]<minPrice){
            minPrice=prices[i];
        }
        else if(prices[i]-minPrice>profit){
            profit=prices[i]-minPrice;
        }
    } return profit;
}
int main(){
  vector<int> prices = {7, 5, 4, 3, 2,5};
    int result = maxProfit(prices);
    cout << "Max Profit: " << result << endl;
    
    
    return 0;
}