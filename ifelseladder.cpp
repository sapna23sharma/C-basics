#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter the values of a,b and c";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"a is largest";
}
else if(b>c)
	{
		cout<<"b is largest";
	}
	else
	{
		cout<<"c is largest";
	}
}
