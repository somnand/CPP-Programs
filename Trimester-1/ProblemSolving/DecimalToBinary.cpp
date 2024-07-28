/**
 * WAP to return Binary representation of a number 
 */
#include<iostream>
#include<cmath>
using namespace std;

void binary(int n)
{
    int binary[(int)(log(n)/log(2))]; // Taking log(base2) of n
    int i=0;
    while(n>=1)
    {
        binary[i]=n%2;
        n=n/2;
        i++;        
    }
    for(int j=i-1;j>=0;j--)
        cout<<binary[j];
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter decimal digit : ";
    cin>>n;
    binary(n);
    return 0;
}