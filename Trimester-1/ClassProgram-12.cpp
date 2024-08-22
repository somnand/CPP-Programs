/**
 * Inheritance in C++
 */

#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual float area()=0; //Pure abstract function. This means that the 
};

class Circle : public Shape //Way of Extending the class 
{
    private:
    int radius;
    public:
    Circle()
    {
        radius=2;
    } 
    Circle(int r)
    {
        radius=r;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
};

int main()
{
    Shape* s1 = new Circle(5);
    cout<<s1->area()<<endl;

    return 0;
}