#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++) // passes in the array
	{ 
		for(j=0;j<n-i-1;j++) //comparing with the elements in the array (n-i) to avoid unnecessary comparision 
		{
			if(a[j]>a[j+1]) 
			{
				temp = a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		
		cout<<" "<<a[i];
	}
	return 0;
}
