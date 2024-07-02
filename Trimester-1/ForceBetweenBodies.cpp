#include<iostream> 
#include<math.h>

using namespace std;

#define G 6.6743e-11 //Universal Constant

int main()
{
    int firstMass,secondMass,distance;

    cout<<"Enter the mass of first body(kg) ";
    cin>> firstMass;
    cout<<"Enter the mass of second body(kg) ";
    cin>> secondMass;
    cout<<"Enter the distance between them(m) ";
    cin>> distance;



    //Calculating the Graviational Force between them

    float force = G*firstMass*secondMass/pow(distance,2);

    cout<<"Force = "<<force<<" N"<<endl;


}
