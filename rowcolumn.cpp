#include<iostream>
using namespace std;
main()
{
	int i,j,a[2][3];//[row] [coloumn]
	for(i=0;i<2;i++)//row
	{
		for (j=0;j<3;j++)
		{
		
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
		cout<<a[i][j];	
	}
	cout<<endl;
}
}
