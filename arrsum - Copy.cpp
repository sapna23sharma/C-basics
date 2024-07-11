#include<iostream>
using namespace std; 
main()
{
	int s[5],i=0,sum;
	cout<<"enter the marks";
	cin>>i;
	for(i=0;i<5;i++)
	{
		cin>>s[i];
		sum=sum+s[i];
	}
	cout<<"marks are :";
	for(i=0;i<5;i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<"sum is :" <<sum;
}
