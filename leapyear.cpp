#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;
	if(n%400==0)
	{
		cout<<"its a leap year";
	}
	else if(n%100==0) 
	{
		cout<<"its not a leap year";
	}
	else if(n%4==0)
	{
		cout<<" its a leap year ";
	}
	else{
		cout<<"its not a leap year";
		}

	
	}
