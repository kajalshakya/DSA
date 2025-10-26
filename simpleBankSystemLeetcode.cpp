#include<bits/stdc++.h>
using namespace std;
//You are asked to design a simple bank system that can 
//manage accounts and perform basic operations.
class Bank {
    private:
        vector<long long>balance;
    public:
        Bank(vector<long long>&balance){
            this->balance=balance;
        }
        bool transfer(int account1, int account2,long long money){
            if(account1<1 || account1>balance.size()||
            account1<2 || account2>balance.size()){
                return false;
            }
            if(balance[account1-1]<money){
                return false;
            }
            balance[account1-1]-=money;
            balance[account2-1]+=money;
            return true;
        
        }
        bool deposit(int account,long long money){
           if(account<1 || account>balance.size()){
            return false;
           }
           balance[account-1]+=money;
           return true;
        }
        bool withdraw(int account,long long money){
             if(account<1 || account>balance.size()){
                return false;
           }
           if(balance[account-1]<money){
            return false;
           }
            balance[account-1]-=money;
            return true;
        }
         void printBalances() {
        cout << "Current balances: ";
        for (long long b : balance) cout << b << " ";
        cout << endl;
    }

};
int main(){
    vector<long long> initialBalance = {10, 100, 20, 50, 30};
    Bank bank(initialBalance);
    cout << boolalpha;
    cout << "Withdraw 10 from account 3: " << bank.withdraw(3, 10) << endl;
    bank.printBalances();

    cout << "Transfer 20 from account 5 to account 1: " 
         << bank.transfer(5, 1, 20) << endl;
    bank.printBalances();

    cout << "Deposit 20 into account 5: " << bank.deposit(5, 20) << endl;
    bank.printBalances();

    cout << "Transfer 15 from account 3 to account 4: " 
         << bank.transfer(3, 4, 15) << endl;
    bank.printBalances();

    cout << "Withdraw 50 from account 10 (invalid): " 
         << bank.withdraw(10, 50) << endl;
    bank.printBalances();
    return 0;
}