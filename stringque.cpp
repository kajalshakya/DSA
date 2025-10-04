// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

int main() {
   string str;
    int count =0;
    cout<<" enetr sting";
   getline(cin,str);
   for(int i=0;i<str.length();i++){
       if(str[i]>='a' && str[i]<='z'){
           count++;
       }
   } return count++;
   

    return 0;
}