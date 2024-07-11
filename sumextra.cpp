#include<iostream>
using namespace std;
main()
{
	int n,last,sum=0;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
		last=n%10;
		sum=sum+last;
		n=n/10;
	}
	cout<<sum;
}
