#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the number:\n";
	cin>>n;
	switch(n%2==0)
	{
		case 1:
			cout<<"even";
			break;
			default:
				cout<<"odd";
				
	}
}
