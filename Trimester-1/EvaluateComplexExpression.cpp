#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float rhxy,uxy,vxy;

    cout<<"Initial Density ";
    cin>>rhxy;
    cout<<"First Macroscopic Variable ";
    cin>>uxy;
    cout<<"Second Macroscopic Variable  ";
    cin>>vxy;


    float fxy = rhxy*(1+3*(vxy-uxy)+4.5*pow(vxy-uxy,2)-1.5*(pow(uxy,2)+pow(vxy,2)))/36.0;
    float gxy = pow(fxy,2)+pow(uxy,2)+pow(vxy,2);

    cout<<"gxy = "<<gxy<<endl;

    return 0;
}