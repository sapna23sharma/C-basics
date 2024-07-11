#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the number :";
	cin>>n;
	if ((n>=20) && (n<=60))
	{
	
	cout<<"lies between the range"<<endl;
	

if(n%2==0)
{
	cout<<"even";
}
else
{
	cout<<"odd"<<endl;
}
}

		else
		{
			cout<<"doesn't lie between the range";
		}
}
