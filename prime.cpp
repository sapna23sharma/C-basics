#include<iostream>
using namespace std;
main()
{
	int n,i,flag=0;
	cout<<"enter the number :";
	cin>>n;//9
	i=2;
	while(i<n)// loop works for 1 2 3 4 5 6 7 8
	{
		if(n%i==0)
		
		{
		
		flag=1;
		break;
	}
	i++;//value incrementing from 1 to 2 to 3 and so on
}
if(flag==0)
{
	cout<<"prime number";
}
else
{
	cout<<"not a prime";
}
}
