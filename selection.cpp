#include<iostream>
using namespace std;
int main()
{
	int n,pos,c,d,t,i;
	cin>>n;
	int a[5];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(c=0;c<n-1;c++)
	{
	 pos=c;
	 {
	 if (a[pos]>a[d])
	 pos=d;
}
	if(pos!=c)
	{
	t=a[c];
	a[c]=a[d];
	a[d]=t; 
}
}
for(i=0;i<n;i++)
{
	cout<<" "<<a[i];
}
return 0;
}
