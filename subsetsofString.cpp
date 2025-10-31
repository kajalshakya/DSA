#include<bits/stdc++.h>
using namespace std;
//time complexity:O(2^N)
//space complexity:O(N)
void printsubsets(string str,string subset){
    //base case
    if(str.size()==0){
        cout<<subset<<endl;
        return;
    }
    char ch=str[0];
    //yes choice
    printsubsets(str.substr(1,str.size()-1),subset+ch);
    //no choice
   printsubsets(str.substr(1,str.size()-1),subset);


}
int main(){
    string str="abc";
    string subset="";
    printsubsets(str ,subset);
    return 0;
}
    
    