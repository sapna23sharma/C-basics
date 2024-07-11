#include<iostream>
using namespace std;
class calculator
{
	int a,b,c;
	public:  //incase the access is private we use public otherwise no other class will be able to use 
	read()
	{
		cout<<"enter the values of a and b";
		cin>>a>>b;
		
	}
	sum()
	{
		c=a+b;//object
		cout<<"sum is :"<<c;
	}
};
main()
{
	calculator c;
	c.read();
	c.sum();
}

