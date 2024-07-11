//method 2
#include<iostream>
using namespace std;
//function declaration
int max(int n1,int n2);
int main()
{
	int a=100;
	int b=200;
	int ret;
	//calling
	ret=max(a,b);
	cout<<"max value is: "<<ret;
	return 0;
}
//definition
int max(int n1,int n2)
{
	int result;
	if(n1>n2)
	{
		result=n1;
	}
	else
	{
		result=n2;
	}
	return result; 
}
