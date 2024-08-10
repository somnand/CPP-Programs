/**
 * Scope of Variables
 * Function
 */
#include<iostream>

using namespace std;
#define cube(s) s*s*s

int main()
{
    int a=9;
    do
    {
        int a = 8;//This is not correct in JAVA!!
        cout<<a<<endl;        
    }while(false);
    cout<<a<<endl;

    int result = cube(3);
    cout<<result<<endl;

    return 0;
}