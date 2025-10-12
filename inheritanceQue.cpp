#include<bits/stdc++.h>
using namespace std;

//Question2: Create a class BankAccount with private attributes accountNumber and 
//balance. Implement public methods deposit() ,withdraw() ,and getBalance() to
// manage the account
class BankAccount{
private:
    int accNo;
    double balance;
public:
    BankAccount(int accnum,double bal){
        accNo=accnum;
        balance=bal;
    }
    void deposit(double amount){
        balance+=amount;
    }
    void withraw(double amount){
        if(amount<balance){
            balance-=amount;
        }
        else{
            cout<<" no sufficient balance"<<endl;
        }
    }
    double getbalance(){
        cout<<"balance :";
        return balance;
    }
};

//Question3: Create a base class Person with attributes name and age .
//Derive a class Student from Person and add an additional attribute studentID.
//Implement a method display StudentInfo() in the Student class to display all details


class Person{
protected:
    int age;
    string name;
public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class Student :public Person{
private:
    int studentId;
public:
    Student(string name,int age, int studentId) :Person(name,age){
       
        this->studentId=studentId;
    }
    void studentInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"studentId :"<<studentId<<endl;
    } 
};
int main(){
    // Q1
    BankAccount ac1(5016,0);
    ac1.deposit(10000);
    cout<<ac1.getbalance()<<endl;
    ac1.withraw(5000);
    cout<<ac1.getbalance();

    //Q2
    Student s1("kajal",21,123);
    s1.studentInfo();
    return 0;
}