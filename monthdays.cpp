#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"enter a";
	cin>>a;
	if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a=12))
	{
		cout<<"31 days";
	}
	else if(a==2)
	{
		cout<<"28 days";
	}
	else if((a==4)||(a==6)||(a=9)||(a==11))
	{
		cout<<"30 days";
	}
	else
	{
		cout<<"invalid";
	}
}
