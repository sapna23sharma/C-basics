//recursion
#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	int k=factorial(n);
	cout<<k;
}
