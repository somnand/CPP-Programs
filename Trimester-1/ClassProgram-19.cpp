/**
 * Different streams in C++
 */
#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello"<<endl; //Writes to standard output. If output is redirected this will goto the redirected output
    cerr<<"Hello Error"<<endl; //Always goes to Monitor by default
    clog<<"Hello Log"<<endl; //Goes to monitor but with logging enabled. Need to know more on this. 
}