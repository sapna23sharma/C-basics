#include<iostream>
using namespace std;
class student
{
	int obj[2],result=0;
	int i,n;
	public:
		read()
		{
	int i;
	int sum=0;
	int average;
	
	
		cout<<"sum is :";
		for(i=1;i<=5;i++)
		{
			sum=sum+obj[i];
		}
	
		result()
		{
				average=sum/5;
		cout<<sum<<endl;
		cout<<"average is: ";
		cout<<average;
		}
	};
		main()
		{
		
		student obj[2];
		int i,n;
		cout<<"enter the no of students";
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			obj[i].read();
		}
		for(i=0;i<n;i++)
		{
			obj[i].result();
	}
}
