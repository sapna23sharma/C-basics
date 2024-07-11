#include<iostream>
using namespace std;
main()
{
	int n,m,sum;
	cout<<"enter the last number";
	cin>>n;
	m=1;
	if(!(m%2==0))
	{
	
		while(m<=n)
		{
			sum= sum+m;
			m++;
		}
		cout<<"the sum of odd numbers is"<<sum;
	}
	
}
