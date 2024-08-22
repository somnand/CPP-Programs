/**
 * Recursion. Very good class question.
 */
#include<iostream>

using namespace std;

void print(int x)
{
    if(x==0)//Base case
        return;

    cout<<"Hello "<<x<<endl;
    x--;
    print(x);
    cout<<"Bye "<<x<<endl;
    return;
}
//TODO Print array by recursion 
void printArray(int a[],int i,int N)
{
    if(i==N)
        return;
    cout<<a[i]<<" ";
    i++;
    printArray(a,i,N);    
}

int main()
{
    int arr[5]={1,2,3,4,5};
    printArray(arr,0,5);

    //print(3);
}