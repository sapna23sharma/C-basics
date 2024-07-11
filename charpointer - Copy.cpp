#include<iostream>
using namespace std;
main()
{
	int a=10;
	int *p;
	p=&a;
    char c=2;
    char *c1;
    c1=&c;
	cout<<"address of a - "<<p<<endl;//address of a;
	cout<<"value of a - "<<a<<endl;//value of a;
	cout<<"address of a - "<<&a<<endl;//address of a;
	cout<<"address of p - "<<&p<<endl;//address of p;
	cout<<"value of a - "<<*p<<endl;//value of a
	cout<<"value of c - "<<&c<<endl;//value of c;
	cout<<"address of c - "<<*c1<<endl;
}
