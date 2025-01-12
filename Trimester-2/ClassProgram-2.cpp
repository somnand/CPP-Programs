//#include<iostream> 
//#include<map>
#include<bits/stdc++.h>
using namespace std;

void countElements(int a[],int len)
{
    map<int,int> count;

    for(int i=0;i<len;i++)
    {
        count[i]++;


        // if(count[i]==a[i])
        // {
            
        // }
        // else
        // {
        //     count[i]=0;
        // }
    }

    for(const auto& pair : count)
    {
        cout<<pair.first << pair.second<<endl;
    }

}

int main()
{
    int a[] = {1,2,3,4,4,4};

    countElements(a,6);
    return 0;

}
