#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,string src,string helper,string dest){
    //base case
    if(n==1){
        cout<<"move "<<n<<" from "<<src<<" to"<<dest<<endl;
        return;
    }
    towerOfHanoi(n-1,src,dest,helper);
    cout<<"move "<<n<<" from "<<src<<" to"<<dest<<endl;
 
    
    towerOfHanoi(n-1,helper,src,dest);
}
int main(){
    int n=3;
    int sum=0;
    towerOfHanoi(n,"A","B","C");
    return 0;
}