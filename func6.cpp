//sum of factorial
#include<iostream>
using namespace std;
factorial(int n)
{
	int fact=1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	return fact;
}
main()
{

int n,i,sum=0;
  cout<<"enter number";
cin>>n;
for(i=1;i<=n;i++)
{
	sum=sum+factorial(i);
}
cout<<"sum is: "<<sum;
}
