/**
 * Operator overloading - GM
 */
#include<iostream>
using namespace std;

class Complex
{
    public:
    int real,imaginary;

    Complex()
    {}

    Complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }

    void display()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }

    Complex operator+(Complex obj)
    {

        cout<<"in operator overloading "<<real<<" "<<imaginary<<endl;
        Complex res;
        res.real=real+obj.real;
        res.imaginary=imaginary+obj.imaginary;

        return res;
    }

};

int main()
{
    Complex c1(3,4),c2(1,2),c3(5,6);
    Complex c4=c1+c2+c3;

    c4.display();

    return 0;    
}