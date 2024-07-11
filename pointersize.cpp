#include<iostream>
using namespace std;
main()
{
	int a=3;
	int *p= &a;
	cout<< sizeof(p) << sizeof(*p)<< sizeof(&p) <<endl;
}
