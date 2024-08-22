#include<iostream>
using namespace std;

class MyClass
{
    private: 
    int x=9;

    public:
    int getX()
    {
        return x;
    }

    void setX(int x)// This is giving 8 if x=x ?
    {
        x=x;
    }
};

int main()
{
    MyClass obj1,obj2;

    //void* ptr = &obj1;//Bad practice

    obj1.setX(4); 
    cout<<obj1.getX()<<endl; 

    return 0;
}