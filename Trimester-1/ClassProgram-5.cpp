/** Class Topic : Arrays (Single and Multiple) */
#include<iostream>

using namespace std;

void multiDimensionalArray()
{
    int a[2][2] = {1,2,3,4};

    cout<<a[0][1]<<endl;

    //Rows are not mandatory
    int b[][2] = {1,2,3,4};

    cout<<"Garbage ? "<<b[0][2]<<endl;//This prints b[1][0]
}

int main()
{
    multiDimensionalArray();

    int a[5]={1,2,3,4,5};

    int index = 3;
    cout<<a[index];        
}