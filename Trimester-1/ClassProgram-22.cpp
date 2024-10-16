#include<iostream>
#include<array>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
#include<queue>
#include<deque>
#include<stack>

using namespace std;

void stlArray()
{
    cout<<"------------STL Array------------"<<endl;
    array<int, 4> arr{10,30,20,40};

    cout<<"Size : "<<arr.size()<<endl;

    cout<<"Printing using variable : "<<endl;
    for(auto i : arr) cout<<i<<" ";
    sort(arr.begin(),arr.end());
    cout<<endl;
    for(auto i : arr) cout<<i<<" ";
    cout<<endl;
    //Iterator
    cout<<"Printing using iterator : "<<endl;
    for(auto i=arr.begin();i!=arr.end();i++) cout<<*i<<" ";
    cout<<endl;
    for(auto i=arr.end();i!=arr.begin();i--) cout<<*i<<" ";
    cout<<endl;
    for(auto i=arr.rbegin();i!=arr.rend();i++) cout<<*i<<" ";
    cout<<endl;
    for(auto i=arr.cbegin();i!=arr.cend();i++) cout<<*i<<" ";
    cout<<endl;
    //for(auto i=arr.cbegin();i!=arr.cend();i++){*i=9; cout<<*i<<" ";}//Error on Readme Pointer
    cout<<endl;
    //TODO sort using cbegin and cend
}

void stlVector()
{
    cout<<"------------STL Vector------------"<<endl;
    vector<int> vector;

    for(int i=0;i<10;i++) vector.push_back(i);

    for(auto i : vector)cout<<i<<" ";  
    cout<<endl;
    for(auto i=vector.cbegin();i!=vector.cend();i++) cout<<*i<<" ";  
    cout<<endl;
}

void stlList()
{
    cout<<"------------STL List------------"<<endl;
    list<string> l;
    list<string>::iterator i;

    l.push_back("Hello");
    l.push_back(" ");
    l.push_back("World!");

    for(i=l.begin();i!=l.end();i++)
    {
        cout<<*i;
    }

}

int main()
{
    //stlArray();
    stlVector();
    //stlList();
    return 0;
}
