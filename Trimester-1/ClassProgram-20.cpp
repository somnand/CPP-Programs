/**
 * IO Streams - GM
 */
#include<iostream>
#include<fstream>

using namespace std;

void writeToFile()
{
    ofstream outfile("Log.txt");
    
    if(!outfile)
    {
        cerr<<"Error in Creating file"<<endl;
    }

    outfile<<"Test1"<<endl;
    outfile<<"Test2"<<endl; //This is appending by default
    outfile.close();

    cout<<"Data written!"<<endl;
}

void readFromFile()
{
    ifstream infile("Log.txt");
    
    if(!infile)
    {
        cerr<<"Error in Creating file"<<endl;
    }

    string line1,line2;
    //infile>>line; //Operator overloading
    getline(infile,line1);
    getline(infile,line2);
    infile.close(); 

    cout<<"Data : "<<line1<<endl;
    cout<<"Data : "<<line2<<endl;
}


int main()
{
    writeToFile();
    readFromFile();
}