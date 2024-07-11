#include<iostream>

using namespace std; 

int main()
{
if(false)
cout<<"First if is selected"<<endl; //If this is removed then last statement is printed or else second else is printed 
    if(false)
        cout<<"Second if is selected"<<endl;
else
    cout<<"Second else is selected"<<endl;    //Indentation is wrong

cout<<"Program last statement";    

return 0;
}