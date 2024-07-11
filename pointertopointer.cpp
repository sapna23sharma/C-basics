#include<iostream>
using namespace std;
main()
{
	int a=58;
	int *p;
	int **q;
	p=&a;
	q=&p;
	cout<<"value of a - "<<a<<endl;
	cout<<"address of a - "<<*p<<endl;
	cout<<"address of p - "<<**q<<endl;
}
