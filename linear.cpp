#include<iostream>
using namespace std;
int main()
{
	int n,i,flag=0,key;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched";
	cin>>key;
	for(i=0;i<n;i++)
		if(key==a[i])
		{
		cout<<"Element Found";
		break;
		}
	 if(i==n)
	{
		cout<<"Not Found";
		
	}

	return 0;	
}     // Time Complexity {0(n)}
