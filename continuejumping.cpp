#include<iostream>
using namespace std;
main()
{
	int i;
	cout<<"enter the number";
	cin>>i;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		continue;//if condition true the will print next iteration i.e even condition; next is odd number hence can be printed
		cout<<i;
	}
}
