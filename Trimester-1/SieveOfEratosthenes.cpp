/**
 * Finding list of all prime numbers below the input value
 * using Sieve of Eratosthenes.
 */
#include<iostream> 

using namespace std;

int main()
{
    int N;

    cout<<"Enter the Last bound of finding Prime numbers : ";
    cin>>N;

    bool a[N];//true means its prime. By Default assuming all are prime.
    for(int i=0; i<N; i++)
        a[i] = true; //Setting all numbers to Prime

    for(int i=2;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(j%i==0)
                a[j]=false;//Making all multiples of i as non-prime by traversing from i+1 to N-1
        }
    }

    for(int i=2;i<N;i++)
    {
        if(a[i]==true)
            cout<<i<<" ";
    }

    return 0;
}