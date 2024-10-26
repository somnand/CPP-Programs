#include<iostream>
#include<fstream>
#include<vector>
#include"Point.h"
#include"FileUtils.h"
using namespace std;

int main()
{
    vector<Point> points;
    Point p(1,0,13);
    points.push_back(p);

    FileUtils::readDatasetFromFile();
    cout<<"Project End !! "<<endl;

    return 0;
}