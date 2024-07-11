#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the number :";
	cin>>n;
	if ((n>=20) && (n<=60))
	{
	
	cout<<"lies between the range";
}
		else if((n>20) &&(n<60))
		{
			cout<<" doesn't lies between the range ";
		}
	
		else
		{
			cout<<"doesn't lie between the range";
		}
}
