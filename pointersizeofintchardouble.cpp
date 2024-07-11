#include<iostream>
using namespace std;
main()
{
	int a=3;
	char b = 'z';
	double c = 1.03;
	int *pa= &a;
	char *pb=&b;
	double *pc=&c;
	cout<< sizeof(pa) << sizeof(*pa)<< sizeof(&pa) <<endl;
		cout<< sizeof(pb) << sizeof(*pb)<< sizeof(&pb) <<endl;
			cout<< sizeof(pc) << sizeof(*pc)<< sizeof(&pc) <<endl;

		

	
}
