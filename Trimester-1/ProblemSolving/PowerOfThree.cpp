/**
 * Given a number x, find if its a power of 3 or not
 */
#include<iostream>
using namespace std;

int powerOf3(int x) 
{
    if(x==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    float result=x;
    
    do
    {
        if(result==1.0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        result = result/3;
    }while(result>=1);
    
    cout<<"NO"<<result<<endl;
    return 0;
}   


int main()
{
    //powerOf3(2187);
    powerOf3(3486784401);
}