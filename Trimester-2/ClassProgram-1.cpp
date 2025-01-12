#include<iostream>
using namespace std;

int main()
{
    int N; 
    cout<<"Enter a number to find whether power of 2 : ";
    cin>>N;
    bool flag = (N&(N-1)==0);
    cout<< "Power of 2 is "<<flag<<endl;
    return 0;
}