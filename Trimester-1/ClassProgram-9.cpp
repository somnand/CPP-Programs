/**
 * Recursion. Very good class question.
 */
#include<iostream>

using namespace std;

void print(int x)
{
    if(x==0)//Base case
        return;

    cout<<"Hello "<<x<<endl;
    x--;
    print(x);
    cout<<"Bye "<<x<<endl;
    return;
}


int main()
{
    print(3);
}