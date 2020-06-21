#include<iostream>
using namespace std;
int main()
{
	int n,i=2;
	cin>>n;//5
	while(i<=n-1) // (2<=4) (3<=3) (4<=2) (5<=5)
	{
		if(n%i==0) //(4%2==0) (3%3==0) ()
		{
			cout<<"Not a prime";
			break;
		}
		i++;
	}
	if(i==n)
	{
		cout<<"prime numb";
	}
	return 0;
}
