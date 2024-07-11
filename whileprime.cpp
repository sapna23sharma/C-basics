#include<iostream>
using namespace std;
main()
{
	int a,b,flag=0;
	cout<<"enter the number";
	cin>>a;
	b=2;
	while(b<a)
	{
		if(a%b==0)
		{
			flag=1;
			break;
		}
		b++;
	}
	if(flag==0)
	{
		cout<<"prime number";
		
	}
	else
	{
		cout<<"not a prime number";
	}
}
