//pass by address
#include<iostream>
using namespace std;
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
}
int main()
{
	int a=10,b=20;
	cout<<"before swap value of a is: "<<a<<endl;
	cout<<"before swap value of b is: "<<b<<endl;
	swap(a,b);
	cout<<"after swap value of a is: "<<a<<endl;
	cout<<"after swap value of b is: "<<b;
	return 0;
}
