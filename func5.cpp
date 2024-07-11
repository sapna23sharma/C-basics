//nth element of fibonaaci
//comment delete krdo series print hojayegi
#include<iostream>
using namespace std;
fibonaaci(int n)
{
	int i;
	int first=2;
	int second=3;
	int third;
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			//cout<<first;
		}
		else if(i==2)
		{
			//cout<<second;
		}
		else
		{
			third=first+second;
			//cout<<third;
			first=second;
			second = third;
		}
	}
	cout<<third; //nth element
}
main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	fibonaaci(n);
}


