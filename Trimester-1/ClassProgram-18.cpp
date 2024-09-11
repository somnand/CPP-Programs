/**
 * I/O Streams in C++
 * 
 */
#include<iostream> 
#include<ios>

using namespace std;

void coutFlags()
{
    //cout.unsetf(ios::dec|ios::oct|ios::hex);
    //cout.unsetf(ios::hex|ios::basefield);
    //cout.setf(ios::hex);
    cout.setf(ios::showbase);
    cout.setf(ios::oct,ios::basefield);

    int x=62;
    cout<<"Octal : "<<x<<endl;
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hexadecimal : "<<x<<endl;
}

int main()
{
    coutFlags();

    return 0;

}