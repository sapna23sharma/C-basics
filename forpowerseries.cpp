#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n,i,sum=0;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	sum=sum+pow(i,2);	
	}
	cout<<sum;
}
