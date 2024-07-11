//check prime or not
#include<iostream>
using namespace std;
prime(int n)
{
	int i;
	int flag=0;//boolean
for(i=2;i<2;i++)
{
	if(n%i==0)
	{
		flag=1;
		break;
	}
}
if(flag==0)
{
	cout<<"prime";
}
else
{
	cout<<"not prime";
	
}
}
int main()
{
	int n;
	cout<<"enter number";
	cin>>n;
	prime(n);
}
