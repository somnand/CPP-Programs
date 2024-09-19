#include<iostream>
#include<array>
#include<iterator>
#include<algorithm>

using namespace std;

void stlArray()
{
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
}

int main()
{
    stlArray();
    return 0;
}
