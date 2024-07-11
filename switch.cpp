#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the month numbers\n";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"january has 31 days";
			break;
			case 2:
				cout<<"february has 28 days";
				break;
				default:
				cout<<"invalid";
	}
}
