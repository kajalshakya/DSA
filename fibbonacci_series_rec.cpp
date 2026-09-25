#include <iostream>
using namespace std;
void fib(int a, int b, int n)
{
    if(n==0) return;
    cout<<a<<" ";
    fib(b, a+b, n-1);
}


int main() {
    int n=5;
    fib(0,1,n);
}
    
    