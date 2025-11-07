#include <bits/stdc++.h>
using namespace std;
//time complexity:O(NlogN) Traversal Complexity=O(N)+Insert/Update in mapO(logN)
//space complexity:)O(N)
//using ordered map
int maximumPopulation(vector<vector<int>>&logs){
    map<int,int>mp;
    for(auto &i:logs){
        mp[i[0]]++;
        mp[i[1]]--;
    }
    int curr=0,maX=0,ansYear=0;
    for(auto &i:mp){
        curr+=i.second;
        if(curr>maX){
            maX=curr;
            ansYear=i.first;
        }
    }
    return ansYear;
}
//time complexity:O(NlogN) 
//space complexity:)O(N)
//using pair
int maximumPopulation2(vector<vector<int>>&logs){
    vector<pair<int,int>>events;
    for(auto &i:logs){
        events.push_back({i[0],1});
        events.push_back({i[1],-1});
    }
    sort(events.begin(),events.end());
    int curr=0,maX=0,ansYear=0;
    for(auto &i:events){
        curr+=i.second;
        if(curr>maX){
            maX=curr;
            ansYear=i.first;
        }
    }
    return ansYear;
}
int main() {
    vector<vector<int>>logs = {{1950,1961},{1960,1971},{1970,1981}};
    cout<<"year:"<<maximumPopulation(logs)<<endl;
    cout<<"year:"<<maximumPopulation2(logs);
    return 0;
}



    
    

