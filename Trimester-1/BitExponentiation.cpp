#include<iostream>
#include<time.h> 

using namespace std;

unsigned int exponent(int x,int y)
{
    for(int i=0;i<y;i++)
    {
        x = x * x;
    }
    return x;  // Returns the final result after squaring x y times.
}
/*
This function uses the concept of product sequence
*/
unsigned int improvedExponent(int x,int y)
{
    unsigned int productSequence=1;    

    while(y>0)
    {
        if(y%2==1)
            productSequence = productSequence * x;           

        y=y/2;    
    }

    return productSequence;

}

int main()
{
    unsigned int result = exponent(5,23);
    cout<<"Result : "<<result<<endl;
    result = improvedExponent(5,23);
    cout<<"Result : "<<result<<endl;
}
