#include<iostream> 
using namespace std;

class SNode
{
    public:
    int data;
    SNode* next;

    SNode(int x)
    {
        data=x;
        next=NULL;
    }
};

class SinglyLinkedList
{
    SNode* head; //Stores the head of the List can be NULL too
    SNode* tail; //Optional but improves performance
    int size;


    public: 
    SinglyLinkedList()
    {
        head=NULL;
        tail=head;
        size=0;
    }

    void insertAtEnd(int d)
    {
        SNode* newNode = new SNode(d);
        if(head==NULL)
        {
            head = newNode;
            return;
        }    

        SNode* dummy = head;
        while(dummy->next!=NULL)
        {
            dummy=dummy->next; //Skipping all body            
        }
        
        dummy->next = newNode;
        tail = newNode;
        size++;
    }

    void printList()
    {
        SNode* dummy=head;
        while(dummy!=NULL)
        {
            cout<<dummy->data<<" ";
            dummy=dummy->next;
        }
        cout<<endl;    
    }
};

//TODO insert at head


int main()
{
    SinglyLinkedList sll;
    sll.insertAtEnd(3);
    sll.insertAtEnd(2);
    sll.insertAtEnd(3);

    sll.printList();

    return 0;
}