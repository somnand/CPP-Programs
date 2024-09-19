/**
 * File pointers in C++
 */
#include<iostream>
#include<fstream> 
using namespace std;

void testFilePosition()
{
    fstream file("Log.txt", ios::in | ios::out | ios::trunc);

    if(!file)
    {
        cerr<<"Failed to open file : "<<endl;
        return;
    }

    file<<"Hello, World!";

    long file_pos = file.tellp();

    cout<<"Current position of Put pointer : "<<file_pos<<endl;

    file.seekp(1);
    file_pos = file.tellp();
    file<<"Hi";
    cout<<"Current position of Put pointer : "<<file_pos<<endl;
    file_pos = file.tellp();    
    cout<<"Current position of Put pointer : "<<file_pos<<endl;

    file.close();

}

int main()
{
    testFilePosition();

    return 0;
}
