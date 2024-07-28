/**
 * This program finds out typically large powers. 
 * Using two methods 1. Normal multiplication 2. Improved Bit Exponent
 * 
 * TODO : Find a way to store > 2^31 
 */

#include<iostream>
#include<chrono>

using namespace std;

unsigned int exponent(int x,int y)
{
    unsigned long long product=1;
    for(int i=1;i<=y;i++)
    {
        product*=x;
    }
    return product;  // Returns the final result after squaring x y times.
}
/*
This function uses the concept of product sequence
*/
unsigned int improvedExponent(int x,int n)
{
    unsigned long long productSequence=x;
    unsigned long long product = 1;    

    while(n>0)
    {
        if(n%2==1)
        {
            product = product * productSequence;
        }            
        n=n/2;
        productSequence = productSequence * productSequence;
    }

    return product;

}

int main()
{
    unsigned long long result;

    auto start = chrono::high_resolution_clock::now();
    result = improvedExponent(2,31);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    cout<<"Result (improved): "<<result<<" time taken : "<<duration.count()<<endl;

    start = chrono::high_resolution_clock::now();
    result = exponent(2,31);
    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    cout<<"Result : "<<result<<" time taken : "<<duration.count()<<endl;    
}
