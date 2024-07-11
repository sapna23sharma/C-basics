#include<iostream>
using namespace std;
main()
{
	int a=100,b=88,c=8;
	int *p1 = &a, *p2 , *p3 = &c;//jahn declare krre vhi value assign krre isliye *p1 etc.
	p2 = &b;  //p2 points to b
	p2=p1; //p2 points to a
	b= *p3; //assign c to b
	*p2 = *p3; //assign c to a
	cout<< a << b << c;
}
