#include<iostream>
using namespace std;
main()
{
	int n,last,sum=0;
	cout<<"enter the number";
	cin>>n;

	if(n%7==0)
	{
	
	cout<<"its a buzz number";
}
else if(n%10==7)
{
cout<<"its a buzz number";
}
else
{
	
		while(n>0)
		{
			last=n%10;
			sum=sum+last;
			n=n/10;
		}
	   if(sum==7)
	   {
	   	cout<<"it a buzz number";
	   }
	   else
	   {
	   	cout<<"not a buzz number";
	   }
	
	}

}

	

