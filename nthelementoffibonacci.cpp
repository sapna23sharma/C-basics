#include<iostream>
using namespace std;
main()
{
	int n,i,f=0,s=1,t;
	cout<<"enter the number";
	cin>>n;
	cout<<"nth element fibonacci series :";
	while(i<n)
	{
	
	if(i==0)
	{
		//cout<<f;
	}
	else if(i==1)
	{
		//cout<<s;
	}
	else
{
	t=f+s;
	f=s;
	s=t;
}
	i++;	
}
cout<<t;
	}

