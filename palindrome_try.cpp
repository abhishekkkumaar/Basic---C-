#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char a[100];
 int i,len,flag=0;
 cin>>a;
 len=strlen(a);
 for(i=0;i<len;i++)
 {
     if(a[i]!=a[len-i-1])
     {
         flag = 1;
         break;
     }
 }
 if(flag==0)
 {
     cout<<"Palindrome";
 }
 else
 {
     cout<<"Not Palindrome";
 }
    return 0;
}

