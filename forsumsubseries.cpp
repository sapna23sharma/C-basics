#include<iostream>
using namespace std;
main()
{
	int n,i,sum=0;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	
	if(i%2==0)
	{
sum=sum-i;
}
else
{
	sum=sum+i;
}
}



cout<<sum;	
}




