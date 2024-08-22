/**
 * This program emphsises the Call By Reference in C++
 */
#include<iostream>

using namespace std;

void swap(int,int);
void swap(int*, int*); //This is overload for call by Reference
void swapNew(int*,int*);

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//Double pointer approach
void swapNew(int* p1,int* p2)
{
    int* t;
    t=p1;
    p1=p2;
    p2=t;
}

int main()
{
    int x=1,y=2;
    swap(x,y);
    cout<<"x= "<<x<<" y= "<<y<<endl;
    swap(&x,&y);
    cout<<"x= "<<x<<" y= "<<y<<endl;
    x=45;
    y=56;
    cout<<"Before swapNew() x= "<<x<<" y= "<<y<<endl;
    swapNew(&x,&y);
    cout<<"After swapNew() x= "<<x<<" y= "<<y<<endl;
}
