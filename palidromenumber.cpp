#include<iostream>
using namespace std;//palindrome number // jiska actual number and uska reverse same aye
main()
{
	int n,reverse=0;
	cout<<"enter the number";
	cin>>n;//123
	int temp=n;//kyunki n ki value zero hogyi so ye provide ni krega reverse value and differentiate ni krega palindrome number
	while(n>0)
	{
		int rem=n%10;//3 2 1
		reverse=reverse*10+rem;//32 //remainder 3 multiply hua 10 se gives 30 then replace 0 of 30 with 2 in order to reverse
		n=n/10;//12 1 0
	}
	if(temp==reverse)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not a palindrome";
	}
}
