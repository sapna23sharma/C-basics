#include<iostream>
using namespace std;
main()
{
	int i,n,sq;
	cout<<"enter the number";
	cin>>n;
	cout<<" 1 ";
	i=2;
	while(i<=n)
	{
		sq=(i*i)+1;
		cout<<sq<<"  ";
		i++;
	}
}
