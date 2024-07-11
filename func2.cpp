//area of rectangle
#include<iostream>
using namespace std;
area(int l,int b)
{
	int a;
	a=l*b;
	cout<<"area is: "<<a;
}
int main()
{
	int l,b;
	cout<<"enter the length and breadth";
	cin>>l>>b;
	area(l,b);
}
