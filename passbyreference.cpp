//passing by reference
//swap two numbers
#include<iostream>
using namespace std;
void swap(int &x,int &y)//ampersand left side pe hoga to pass by reference
{
	int z=x;
	x=y;
	y=z;

	}
	int main()
	{
		int a,b;
		cout<<"enter the values of a and b";
		cin>>a>>b;
		cout<<"before swap";
		cout<<" a = " <<a<<" "<<"b = " <<b<<endl;
		swap(a,b);
		cout<<"after swap with pass by reference";
		cout<<" a = " <<a<<" "<<"b = " <<b<<endl;
	}
