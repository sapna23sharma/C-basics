#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"enter the first and the last number";
	cin>>a>>b;
	if(a<b)
	{
		while(a<=b)
		{
			if(a%2==0)
			{
				cout<<a<<" ";
			}
			a++;
		}
	}
}
