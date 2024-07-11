#include<iostream>
using namespace std; // if we dont intialise the input value it will store garbage value
main()
{
	int s[5],i;
	cout<<"enter the marks";//two for loop lgai taki sari inputs hone ke baad output aye otherwise single input ki single output ayegi continous nhi hoga
	for(i=0;i<5;i++)
	{
		cin>>s[i];
	}
	cout<<"marks are :";
	for(i=0;i<5;i++)
	{
		cout<<s[i]<<" ";
	}
}
