/**
 * Memory allocation and scope of variable
 */
#include<iostream>

using namespace std;

void mallocBlock()
{
    cout<<"Malloc"<<endl;
    int n=5;
    int* ptr;
    ptr=(int*) malloc(n*(sizeof(int)));

    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<" at "<<(ptr+i)<<endl;
    }
}

void callocBlock()
{
    cout<<"Calloc"<<endl;
    int n=5;
    int* ptr;
    ptr=(int*) calloc(n,(sizeof(int)));

    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<" at "<<(ptr+i)<<endl;
    }
}

int main()
{
    mallocBlock();
    callocBlock();
    
    
    return 0;
}