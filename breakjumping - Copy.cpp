// break-take the control out of the loop
#include<iostream>
using namespace std;
main()
{
	int i;
	cout<<"enter the number";
	cin>>i;
	for(i=1;i<=10;i++)
	{
		if(i>5)// if ke sth curly bracket nhi lgi toh cout se upr wala if ka part hoga and 5 ke baad loop break ho jayegi
		break;//loop se bhr le aata tha condition
		cout<<i;
	}
}

