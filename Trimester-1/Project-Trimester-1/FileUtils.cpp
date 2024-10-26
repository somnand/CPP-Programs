#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include"FileUtils.h"
#define SKIP_TEXT 232
using namespace std;

vector<string> FileUtils::readDatasetFromFile()
{
    ifstream infile("xqf131.tsp");
    vector<string> lines;
    string line;
    
    if(!infile)
       cerr<<"Error in Creating file"<<endl;

    infile.seekg(SKIP_TEXT);
    // if(infile.is_open())
    //     cout<<"File is opened !! "<<endl;
    // else
    //     cout<<"Error in opening!!"<<endl;

    
    while (getline(infile,line))
    {
        lines.push_back(line);
        cout<<line<<endl;
        break;
    }
    
    infile.close(); 

    return lines;
}