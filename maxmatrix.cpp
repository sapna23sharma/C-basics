#include<iostream>
using namespace std;
main()
{
	int a[2][3],i,j,max;
		for(i=0;i<2;i++)
		{
		for(j=0;j<3;j++)
		{
		
	cin>>a[i][j];
}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		
	
		if(a[i][j]>max)
	{
	max=a[i][j];
	cout<<a[i][j];
}
}
cout<<"max number :"<<max;
	
}
}
}
