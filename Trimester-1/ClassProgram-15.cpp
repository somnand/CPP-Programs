/**
 * Template classes. 
 * 
 * Datastructure of Stack supporting opeartions 
 * 1. push() 
 * 2. pop() 
 * 3. isEmpty()
 * 4. peek()
 * 
 */
#include<iostream>
using namespace std;

template<class T>class Stack
{
    private:
    T* stack;
    int top=-1;

    public: 
    void push(T element);
    T pop();
    bool isEmpty();
    T peek();
};
//TODO : Using SRO implement methods



template<class T> void printArray(T* arr)
{
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
}

void testStack()
{
    
}

int main()
{
    int* ptr = new int[3];
    ptr[0]=2;
    ptr[1]=37;
    ptr[2]=4;

    printArray(ptr);

    return 0;
}