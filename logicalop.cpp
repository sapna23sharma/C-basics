#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter the valuesof a,b and c";
	cin>>a>>b>>c;
	if((a>b && a>c))
	{
		cout<<"a is largest";
	}
	if ((b>a && b>c))
	{
		cout<<"b is largest";
	}
}
