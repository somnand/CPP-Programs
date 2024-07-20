/**
 * Print a snake in this pattern 
 * ###
 * ..#
 * ###
 * #..
 * ###
 * 
 */

#include<iostream> 
using namespace std;

void snake(int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i%2==0)//Even row
            {
                cout<<'#';
            }
            else //Odd row
            {
                if(i%4==1 && j==c-1)//Condition for right print
                {
                    cout<<"#"; 
                }
                else if(i%4==3 && j==0)//Condition for left print
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
                
            }
        }
        cout<<endl;
    }   
}

int main()
{
    snake(7,3);
    return 0;
}