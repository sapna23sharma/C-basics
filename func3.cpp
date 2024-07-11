//factorial
#include<iostream>
using namespace std;
factorial(int n)
{
	int fact=1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i; //1 2 6 24 120
	}
	

/*while(n>0)
{
fact=fact*n;
n--;
}*/
cout<<"factorial is :"<<fact;
}
int main()
{
	int n;
	cout<<"enter number";
	cin>>n;
	factorial(n);
	
}
	

