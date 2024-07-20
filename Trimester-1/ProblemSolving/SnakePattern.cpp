/**
 * 
 */

#include<iostream> 
using namespace std;

void snake(int r, int c)
{
    bool rightSide=true;
    
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
                if(rightSide && j==c-1)
                {
                    cout<<"#"; rightSide=false;
                }
                else if(!rightSide && j==0)
                {
                    cout<<"#"; rightSide=true;
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