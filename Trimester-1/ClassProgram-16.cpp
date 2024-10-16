/**
 * Strings in C/C++ 
 */
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void compare()
{
    char s1[]="acb";//This is later in the dictionary and thus given higher value
    char s2[]="abc";

    cout<<"Comparing "<<s1<<" and "<<s2<<" : "<<strcmp(s1,s2)<<endl;
}

int main()
{
    char str1[6]="Hello";
    char str2[6]="World";

    char str3[15] = "";
    strcat(str3,str1);
    strcat(str3,str2);

    //cout<<str3<<endl;

    strncpy(str3,str2,5);
    cout<<str3<<endl;

    string s1 = "Hello";
    string s2 = "World++";

    string s3 = s1+s2;
    cout<<s3<<endl;

    compare();

    return 0;
}