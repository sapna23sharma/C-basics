#include<iostream>
using namespace std;
main()
{
	int n ,last,sum=0;
	cout<<"enter the number";
	cin>>n;//1224
	while(n>0)
	{	
	last=n%10;//4 2 2 1
	sum=sum+last;//4 6 8 //multiple times sum krna toh loop ke ander likhna
		n=n/10;//122 12 1 0

}
cout<<sum;
}
