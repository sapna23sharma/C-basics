#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	if((n%3==0)&&(n%5==0))
	{
	cout<<"divisible by both";
}
	if((n%3==0)&&!(n%5==0))
	{
	
	cout<<"divisible by 3";
}
	if(!(n%3==0)&&(n%5==0))
	{
	
	cout<<"divisible by 5";
}
	if(!(n%3==0)&&!(n%5==0))
	{
	
	cout<<"divisible by none";
}
}
