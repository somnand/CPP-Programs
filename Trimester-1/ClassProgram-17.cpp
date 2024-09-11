/**
 * Friend function
 */
#include<iostream>
using namespace std;

class Restricted
{
    private: 
    int protect;
    

    public:
    Restricted(int x)
    {
        protect=x;
    }
    void show();
    friend void print(const Restricted& obj);
};

void print(const Restricted& obj)
{
    cout<<"Friend : "<<obj.protect;
}

void Restricted::show()
{
    cout<<"SRO "<<protect;
}

int main()
{
    Restricted res(6);
    print(res);
    res.show();

}