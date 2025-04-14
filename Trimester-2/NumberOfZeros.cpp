/**
 * Program to find number of zeros in a number.
 * Iterative and Recursive approach
 */
#include<iostream>
using namespace std;

int zeroCount=0;
int numberOfZerosRecursive(int n)
{
    //Base case 
    if(n==0) return zeroCount;

    //General Case
    int rem = n%10;
    if(rem==0)  zeroCount++;

    return numberOfZerosRecursive(n/10);//Decomposition
}


int numberOfZerosIterative(int n)
{
    int zeroCount=0;
    while(n>0)
    {
        int rem = n%10;
        if(rem==0)
            zeroCount++;

        n=n/10;
    }
    return zeroCount;
}

int main()
{
    int z=56008;
    int zeroCount = numberOfZerosIterative(z);
    cout<<"(Iterative)Number of Zeros in "<<z<<" = "<<zeroCount<<endl;
    zeroCount = numberOfZerosRecursive(z);
    cout<<"(Recursive)Number of Zeros in "<<z<<" = "<<zeroCount<<endl;
    return 0;
}