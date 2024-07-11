#include<iostream>
using namespace std;
main()
{
	int n,i,f=0,s=1,t;
	cout<<"enter the number";
	cin>>n;
	while(i<n)
	{
		if(i==  0)
		{
			cout<<f<<"  ";
		}
		else if(i==1)
		{
			cout<<s<<"  ";
		}
		else
		{
			int t;
			t=f+s;
			f=s;
			s=t;
			cout<<t<<"  ";
		}
		i++;
	}
}
