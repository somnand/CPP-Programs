#include<iostream>

using namespace std;

void segmentation_fault();
void array_pointer();
void const_pointer();
void sizeofPointer();
void arrayUsingPointer();

int main()
{
    sizeofPointer();
    array_pointer();
    //segmentation_fault(); //Uncomment this function only if you want to create a segmentation fault
    arrayUsingPointer();
    const_pointer();
    return 0;
}

void sizeofPointer()
{
    double x=0;
    double *p = &x,*q=&x;

    cout<<"Size of Pointer : "<<sizeof(p)<<endl;
    cout<<"Address : "<<p<<endl;
}

void segmentation_fault()//WARNING : Run this function only if you want to create a segmentation fault
{    
    int null_var = NULL;//TODO : Find the correct datatype
    int *nul_ptr = &(null_var); //SEGMENTATION CODE ERROR
    cout<<nul_ptr<<endl;
}

void array_pointer()
{
    int a[]={1,2,3};
    int *ap = a; //Storing pointer into a non-constant pointer

    int x = *(ap++);
    cout<<"Pointer to array : "<<ap<<endl;
    //cout<<"Pointer to array : "<<a++<<endl; // This gives error 
}

void const_pointer()
{
    int x=0,y=8;
    int const *p = &x;
    const int *pt = &x;

    p=&y;//fault (Why not faulty ?) 
    pt=&y;// ? ? 

    cout<<"Const Pointer : "<<p<<endl; 
    cout<<"Const Pointer : "<<pt<<endl; 
}

void arrayUsingPointer()
{
    int a[5];
    int *p=a;

    for(int i=0;i<6;i++)
    {
        a[i]=i+1;
        cout<<"Array : "<<a[i]<<endl;
        cout<<"Pointer : "<<*(p+i)<<endl;
    }
}
