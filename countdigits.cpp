#include<iostream>
using namespace std;
main()
{
	int n,count;
	cout<<"enter the number";
	cin>>n;//1224
	while(n>0)
	{
		
		n=n/10;
		count++;
		
	}
	cout<<count;
	
}
