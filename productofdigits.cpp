#include<iostream>
using namespace std;
main()
{
	int n ,last,product=1;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{	
	last=n%10;
	product=product*last;
		n=n/10;

}
cout<<product;
}
