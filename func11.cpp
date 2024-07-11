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
		cout<<"enter marks";
		cin>>i;
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
	int percentage;
	
	
		cout<<"sum is :";
		for(i=1;i<=5;i++)
		{
			sum=sum+s[i];
		}
		average=sum/5;
		percentage=sum*100/50;
		cout<<sum<<endl;
		cout<<"average is: ";
		cout<<average<<endl;
		cout<<"percentage is: ";
		cout<<percentage<<endl;
		if(percentage>=90)
		{
			cout<<"A+";
		}
			else if(percentage>=80)
			{
				cout<<"A";
				
			}
			else{
				cout<<"pass";
			}
		}
	
	
};
main()
{
	marks d;
	d.read();
d.print();
	
	
	
}

