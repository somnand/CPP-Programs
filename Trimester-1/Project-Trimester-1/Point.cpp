#include<string>
#include"Point.h"
using namespace std;

Point::Point(int x,int y,int distance)
{
    this->x=x;
    this->y=y;
    this->distance=distance;
}

string Point::toString()
{
    return "("+to_string(x)+" "+to_string(y)+")= "+to_string(distance);
}
