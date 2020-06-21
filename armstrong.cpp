#include<iostream>
using namespace std;
int main()
{
	int num,result=0,rem,org_num;
	cin>>num;
	org_num=num;
	while(org_num>0)
	{
		rem = org_num%10;
		result+=rem*rem*rem;
		org_num /=10;
	}
	if (result == num)
	{
		cout<<"Armstrong number";
	}
	else
	{
		cout<<"Not Armstrong number";
	}
	return 0;
}
