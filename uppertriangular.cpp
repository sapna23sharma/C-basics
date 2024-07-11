#include<iostream>
using namespace std;
main()
{
	int i,j,a[3][3]={{11,22,33},{44,55,66},{77,88,99}};//we can initialise the value 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}	
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	
	if(i<j)
	{
		cout<<a[i][j];
	}
}


	cout<<endl;

}
}

