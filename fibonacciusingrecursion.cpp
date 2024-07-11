//return type func-name(list of parameters)
//{
//body
//}
//fibonacci=0,1,1,2,3,....so on
//functioncalling itself
//fib(5)=fib(4)+fib(3)
//fib(4)=fib(3)+fib(2)
//fib(3)=fib(2)+fib(1)
#include<iostream>
using namespace std;

	int fibonaaci(int n)

{


        if(n==1)
        {
		
        	return 0;
	}
		
	else if(n==2)
			
	{
	return 1;
		
}
	
	
		else 
		
		{
			return fibonaaci(n-1)+fibonaaci(n-2);
		}
	
	
}
int main()
{
	int n;
	cout<<"enter the n";
	cin>>n;
	int k=fibonaaci(n);

cout<<k;
}
