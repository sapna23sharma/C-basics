#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"enter the values of a";
	cin>>a;
	if((a%5==0) && (a%11==0))
	{
    	cout<<"divisible by both";
}
   else if(a%5==0)
       {
       	  cout<<"divisible by 5";
	   }
else if(a%11==0)
{

	   	cout<<"divisible by 11 ";
	   }
	   else
	   {
	   	cout<<"not dvisible by 5 and 11";
	   }
	   
	
	
	
}
