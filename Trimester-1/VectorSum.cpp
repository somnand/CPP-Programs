/**
 * C++ Threading
 */
#include<iostream>
#include<thread>
#include<vector>
using namespace std;

#define SIZE 1000

vector<int> vec;

void vectorSum(int i)
{
    int sum=0;
    int size=250;
    int lb=250*i;
    int ub=lb+size;

    for(int i=lb;i<ub;i++)
    {
        sum+=vec[i];
    }
    cout<<"Sum "<<sum<<endl;
}

void makeVector()
{
    for(int i=0;i<SIZE;i++)
    {
        vec[i]=1;
    }
}

int main()
{
    makeVector();

    thread t[4];
    for(int i=0;i<4;i++)
    {
        t[i]=thread(vectorSum,i);         
    }
    cout<<"Trying to join .. "<<endl;
    for(int i=0;i<4;i++)
    {
        if(t[i].joinable())
            t[i].join();
    }

    return 0;
}