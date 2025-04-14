/**
 * Program to test basic Recursion 
 */
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{


}

int fun(int n)
{
if(n==0)
	return 1;
if(n<0)	
	return 0;
	
return fun(n-1)+fun(n-2)+fun(n-3);	
}


int main()
{
    cout<<fun(3);

}
