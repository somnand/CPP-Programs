#include<fstream>
#include<iostream>
#include"FileUtils.h"
using namespace std;

void FileUtils::readDatasetFromFile()
{
    ifstream infile("xqf131.tsp");
    
    if(!infile)
       cerr<<"Error in Creating file"<<endl;

    if(infile.is_open())
        cout<<"File is opened !! "<<endl;
    else
        cout<<"Error in opening!!"<<endl;

    string line1,line2;
    //infile>>line; //Operator overloading
    getline(infile,line1);
    getline(infile,line2);
    infile.close(); 

    cout<<"Data : "<<line1<<endl;
    cout<<"Data : "<<line2<<endl;
}