#include<iostream>
using namespace std;
main()
{
	int n ,last,product;
	cout<<"enter the number";
	cin>>n;
	last=n%10;
	while(n>10)
	{	
	n=n/10;
}
product=last*n;//jab single answer generate krne ke liye loop ke bahr likhna
cout<<product;
}
