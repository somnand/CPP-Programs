#include<iostream> 
#include<cmath>
using namespace std ; 

int main()
{
    float x,m;
    unsigned int iterations=0;
    cout<<"Enter the Number : ";
    cin>>x;

    cout<<"Enter your guess : ";
    cin>>m;

    while(fabs(x-m*m)>0.001)
    {
        if(m*m>x)
            m-=0.001;
        else
            m+=0.001;

        if(++iterations%(1000000)==0)
            cout<<"Jumps : "<<iterations;
    }

    cout<<"Root : "<<m<<" in "<<iterations<<endl;
}