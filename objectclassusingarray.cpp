#include<iostream>
using namespace std;
class marks
{
	int s[5];
	int rollnumber;
	public:
	read()
	{
		int i;
		cout<<"enter the roll number";
		cin>>rollnumber;
		cout<<"enter marks";
		for(i=1;i<=5;i++)
		{
			cin>>s[5];
		}
		
	}
	print()
	{
	int i;
	int sum=0;
	int average;
	
	
		cout<<"sum is :";
		for(i=1;i<=5;i++)
		{
			sum=sum+s[i];
		}
		average=sum/5;
		cout<<sum<<endl;
		cout<<"average is: ";
		cout<<average;
	}
	
};
main()
{
	marks d;
	d.read();
d.print();
	
	
	
}

