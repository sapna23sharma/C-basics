//dynamic memory allocation
#include<iostream>
using namespace std;
main()
{
	int* p= new int;
	*p = 10;
	delete p;
}
