/**
 * WAP to return Binary representation of a number 
 */
#include<iostream>
using namespace std;

void binary(int n)
{
    unsigned int binary;
    while(n>=1)
    {
        if(n%2==1)
            binary+=1;
        else
            binary+=0;
        
        n=n/2;
        binary*=10;                
    }
    cout<<binary<<endl;
}

int main()
{
    int n;
    cout<<"Enter decimal digit : ";
    cin>>n;
    binary(n);
    return 0;
}