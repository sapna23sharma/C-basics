#include<iostream>
using namespace std;
main()
{
	int a=10;
	int *p;
	p=&a;
    float k=1.5;
    float *p1;//if float use kiya toh pointer bhi float mein save hoga
    p1=&k;
	cout<<"address of a - "<<p<<endl;//address of a;
	cout<<"value of a - "<<a<<endl;//value of a;
	cout<<"address of a - "<<&a<<endl;//address of a;
	cout<<"address of p - "<<&p<<endl;//address of p;
	cout<<"value of a - "<<*p<<endl;//value of a;
	cout<<"value of k - "<<&k<<endl;//value of k;
	cout<<"address of k - "<<*p1<<endl;
}
