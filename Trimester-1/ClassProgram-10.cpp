/**
 * OOPS Concepts - GM
 */
#include<iostream>
using namespace std;

// A union uses a single DataStructure which has the highest size
union Student
{
    int age;
    char grade;
    float height;
};

class Rect 
{
    public: 
    int l,r;
    // Rect()
    // {
    //     l=0;r=0;
    // }

    int area()
    {
        return l*r;
    }
};

int main()
{
    union Student s1;
    s1.age=10;
    s1.grade='A';
    s1.height = 7.8;

    cout<<s1.age<<endl;
    cout<<s1.grade<<endl;
    cout<<s1.height<<endl;

    Rect *rect = new Rect();
    rect->l=5; rect->r=4;

    cout<<"Area : "<<rect->area()<<endl;
    
return 0;
}
