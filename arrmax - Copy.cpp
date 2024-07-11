#include<iostream>
using namespace std;
main()
{
	int a[5],i;
	cout<<"enter the numbers";
		for(i=0;i<=4;i++)
	{
	cin>>a[i];
}
	int max=a[0];
	for(i=0;i<=4;i++)
	{
	
		if(a[i]>max)
	{
	max=a[i];
}
}
cout<<"max number :"<<max;
	


}
