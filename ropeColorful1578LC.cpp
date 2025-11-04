#include <bits/stdc++.h>
using namespace std;
int minCost(string colors,vector<int>&neededTime){
    int cost=0;
    for(int i=1;i<colors.size();i++){
        if(colors[i]==colors[i-1]){
            cost+=min(neededTime[i],neededTime[i-1]);
            neededTime[i]=max(neededTime[i],neededTime[i-1]);
        }
    }
    return cost;
}

int main() {
    string colors="abaac";
    vector<int>neededTime ={1,2,3,4,5};
    cout<<"minimum cost:"<< minCost(colors,neededTime);
    
}



    
    

