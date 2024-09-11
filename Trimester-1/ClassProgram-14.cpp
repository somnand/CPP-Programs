/**
 * Virtual Function - GM 
 * Temple Function - GM
 * 
 */
#include<iostream>
using namespace std;

class Parent
{
    public:
    void show()//Compile time decide
    {
        cout<<"Parent"<<endl;
    }

    virtual void print()//Runtime decide
    {
        cout<<"Parent"<<endl;
    }

};

class Child : public Parent
{
    public:
    void show()
    {
        cout<<"Child"<<endl;
    }

    void print()//Test out with/without virtual 
    {
        cout<<"Child"<<endl;
    }
};

template<typename T>
T getMax(T x,T y)
{
    //cout<<x<<" "<<y;
    return x>y?x:y;
}

int main()
{
    Child c;
    Parent* p;

    p=new Child();
    //p->show();
    //p->print();//Calling virtual print. Thus goes from Child --> Parent

    cout<<"Max : "<<getMax(3,2)<<endl;
    cout<<"Max : "<<getMax(true,false)<<endl;
}