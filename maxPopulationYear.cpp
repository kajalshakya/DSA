#include <bits/stdc++.h>
using namespace std;
//time complexity:O(N);
//space complexity:)O(1)
int maximumPopulation(vector<vector<int>>&logs){
    vector<int>arr(2051,0);
    for(auto &i:logs){
        arr[i[0]]++;
        arr[i[1]]--;
    }
    int curr=0,maX=0,ansYear=0;
    for(int i=1950;i<2051;i++){
        curr+=arr[i];
        if(curr>maX){
            maX=curr;
            ansYear=i;
        }
    }
    return ansYear;
}

int main() {
    vector<vector<int>>logs = {{1950,1961},{1960,1971},{1970,1981}};
    cout<<"year:"<<maximumPopulation(logs);
    return 0;
}



    
    

