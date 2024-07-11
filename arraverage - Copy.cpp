#include<iostream>
using namespace std; 
main()
{
	int s[5],i=0,sum,avg;
	cout<<"enter the marks";
	for(i=0;i<5;i++)
	{
		cin>>s[i];
		sum=sum+s[i];
		avg=sum/5;
	}
	cout<<"marks are :"<<endl;
	for(i=0;i<=5;i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<"sum is :" <<sum<<endl;
		cout<<"average is : "<<avg<<endl;

	
}
