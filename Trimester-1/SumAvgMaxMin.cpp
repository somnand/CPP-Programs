#include<iostream>

using namespace std;

int main() 
{
    int num,max=0,min=0;
    float sum=0,avg=0;

    for(int i=-0;i<10;i<i++)
    {
        cout<<"Enter number "<<(i+1)<<": ";
        cin>>num;

        sum+=num;

        if(min>num)
            min = num;
        if(max<num)
            max = num;
    }

    cout<<"Sum : "<<sum<<endl;
    cout<<"Avg : "<<sum/10.0<<endl;

    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;
}
