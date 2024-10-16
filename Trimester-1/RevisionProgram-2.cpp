#include<iostream>
using namespace std;

class MyClass
{
    public : 
    int x=7;
};


int main()
{
    MyClass* obPtr = new MyClass();

    MyClass dupOb = *obPtr;

    //(*obPtr).x = 8;
    obPtr->x = 8 ;
    cout<<dupOb.x<<endl;    
}
