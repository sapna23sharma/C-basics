#include<iostream>
using namespace std;
main()
{
	int a[5],i=0;
	cout<<"enter the numbers";
		for(i=0;i<=4;i++)
	{
	cin>>a[i];
}
   int min=a[0];
	for(i=0;i<=4;i++)
	{
	
		if(a[i]<min)
	{
	min=a[i];
}
}
cout<<"min number :"<<min;

}
	



