#include<string>
using namespace std;
/**
 * To store the coordinates and the eucledian distance between them
 */
class Point
{
    private:
    int x;
    int y;
    int distance;

    public:
    Point(int x,int y,int distance);
    string toString();    
};