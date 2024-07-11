#include<iostream>
using namespace std;
main()
{
	int n ,counter=0;
	cout<<"enter the number";
	cin>>n;//1224
	while(n>0)
	{
		counter++;//1 2 3 4
		n=n/10;//122 12 1 0 // decimal aara toh sirf integer value print hogi
	}
	cout<<counter;//n=0 condition false so, cout loop se bahr
}
