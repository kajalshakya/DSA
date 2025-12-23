// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
string phone_no(string str){
    string str1="";
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            str1+=str[i];
        }
        if(str1.length()==10){
            break;
        }
       
    }
     return str1;
    
}

int main() {
   string str="82gdh*-&%$g427634hg32$#90+";
   cout<<"phone_no ="<<phone_no(str);

    return 0;
}