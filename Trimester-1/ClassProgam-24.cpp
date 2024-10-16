#include<iostream>
#include<thread>
#include<chrono>
#include<future>
#include<cmath>

using namespace std;

void task()
{
    this_thread::sleep_for(chrono::seconds(7));
    cout<<"Child ! "<<endl;    
}

bool async_prime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
            return false;        
    }
    return true;
}

int main()
{
    thread mt(task);
    mt.detach();

    this_thread::sleep_for(chrono::seconds(5));
    cout<<"main !"<<endl;

    future<bool> f = async(async_prime,6);
    bool result = f.get();

    cout<<"Is prime ? "<<result<<endl;

    return 0;
}