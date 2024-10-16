/**
 * C++ Threading
 */
#include<iostream>
#include<thread>
#include<vector>
#include <unistd.h>

using namespace std;

 

void printHelloWorld()
{
    // #pragma omp parallel
    // {
    cout<<"Hello C++ Thread world!"<<endl;
    // }
}

void taskA()
{
    for(int i=0;i<5;i++)
    {
        //sleep(1);
        cout<<"A"<<endl;
    }    
}

void taskB()
{
    for(int i=0;i<5;i++)
    {
        //sleep(1);
        cout<<"B"<<endl;
    }    
}

int main()
{
    thread newThread(printHelloWorld);
    newThread.join();

    thread ta(taskA);
    thread tb(taskB);

    ta.join();
    tb.join();

    return 0;
}