#include<iostream> 
using namespace std;

class StackNode
{
    public:
    int data;
    StackNode* next;

    public: 
    StackNode(int d)
    {
        data=d;
        next=NULL;
    }
};

class Stack
{
    private : 

    StackNode* top;
    int size;
    
    public: 
    Stack()
    {
        int size=0;
        top=NULL;
    }

    void push(int x)
    {
        StackNode* newElement=new StackNode(x);//Creating a data into a Node
        size++;
        newElement->next=top;
        top=newElement;
    }

    int pop()
    {
        if(size==0)
            return -1;

        int topData = top->data;    

        top=top->next;
        size--;        

        return topData;
    }

    int peek()
    {
        return top->data;
    }

    int stackSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void printStack()
    {
        StackNode* dummyTop = top;

        while(dummyTop!=NULL)
        {
            cout<<dummyTop->data<<" ";
            dummyTop=dummyTop->next;                        
        }
        cout<<endl;                
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Top : "<<s.pop()<<endl;
    cout<<"Size : "<<s.stackSize()<<endl;

    s.printStack();
    s.push(6);
    cout<<"Top : "<<s.peek()<<endl;

    s.printStack();

    return 0;

}
