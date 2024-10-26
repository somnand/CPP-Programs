#include<iostream>
#include<fstream>
#include<vector>
#include"FileUtils.h"
using namespace std;

int main()
{
    vector<Point> points;
    Point p(0,13);
    points.push_back(p);
    
    points=FileUtils::readDatasetFromFile();
    
    for(int i=0;i<points.size();i++)
        cout<<points[i].toString()<<endl;

    cout<<"Project End !! "<<endl;

    return 0;
}