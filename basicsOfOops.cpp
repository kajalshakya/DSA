
#include <bits/stdc++.h>
using namespace std;
class User{
    int id;
    string password;
public:
     string username;
     //constructor
    User(int id){
        this->id=id;
    }
   
    //setter
    void setpassword(string password){
        this->password=password;
    }//getter
    int getid(){
        return id;
    }
    string getpassword(){
        return password;
    }
    
};

int main() {
   User user1(123);
   user1.username="june.7teen";
   cout<<"id :"<<user1.getid()<<endl;
   cout<<"username:"<<user1.username<<endl;
   user1.setpassword("kajal123#");
   cout<<"password:"<<user1.getpassword();
  

    return 0;
}