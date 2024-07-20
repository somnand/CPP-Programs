#include<iostream>
using namespace std;

int fibonacci(int n)
{
    //Base cases 
    if(n==0 || n==1) return n;    

    //Recursive case fn = fn-1 + fn-2
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    int result = fibonacci(n);
    cout<<result;
}