#include<iostream>
using namespace std;
main()
{
	int a=10;
	int *p;
	p=&a;
	cout<<p<<endl;//address of a;
	cout<<a<<endl;//value of a;
	cout<<&a<<endl;//address of a;
	cout<<&p<<endl;//address of p;
	cout<<*p<<endl;//value of a
}
