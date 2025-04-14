/*
 * Stack using two Queues
 */
#include<iostream>
#include<queue>
using namespace std;

class DoubleQueueStack
{
    public:
    DoubleQueueStack()
    {
        queue<int> q1;
        queue<int> q2;
    }

    void push(int x)
    {
        //TODO Enter into q2
        //Now pop into q1 while q2 is not empty
        //Swap q1 and q2 and q1 is the stack 

    }   

    int pop()
    {

    } 

    int peek()
    {

    }
};

int main()
{
    DoubleQueueStack* dqs = new DoubleQueueStack();

    dqs->push(1);
    dqs->push(2);
    dqs->push(3);




}
