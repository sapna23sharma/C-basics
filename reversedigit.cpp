#include<iostream>
using namespace std;
main()
{
	int n,last;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
		last=n%10;
		cout<<last;
		n=n/10;
	}
}
