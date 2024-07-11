#include<iostream>
using namespace std;
main()
{
	int n,m,sum;
	cout<<"enter the last number";
	cin>>n;
	m=1;
	
		while(m<=n)
		{
			sum= sum+m;//sum updated to 1,3,6,10,15
			m++;//2,3,4,5,6
		}
		cout<<"the sum of natural numbers is"<<sum;
		
	
}
