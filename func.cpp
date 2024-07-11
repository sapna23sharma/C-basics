#include<iostream>
using namespace std;
sum(int a,int b)
{
	int c;
	c=a+b;
	cout<<"sum is: "<<c;
}
main()
{
	int a,b;
	cout<<"enter value of a and b";
	cin>>a>>b;
	sum(a,b);
}
