/**
 * Open MP Code
 */
#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>
#include<atomic>

using namespace std;

int count=0;
atomic<int> atomic_count=0;

void countAdd()
{
    for(int i=0;i<1000;i++)
    {
        #pragma omp parellel 
        {
        count++;
        this_thread::sleep_for(chrono::microseconds(1));
        count++;
        }
        atomic_count++;
    }    
}

int main()
{
    thread t[2];

    for(int i=0;i<2;i++)
        t[i]=thread(countAdd);

    for(int i=0;i<2;i++)
        t[i].join();

    cout<<"Count : "<<count<<endl;
    cout<<"Atomic Count : "<<atomic_count<<endl;
    return 0;
}