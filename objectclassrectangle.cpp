#include<iostream>
using namespace std;
class rectangle
{
	int l,b,area,perimeter;
	public: 
	read()
	{
		cout<<"enter the values of l and b";
		cin>>l>>b;
		
	}
	mul()
	{
		area=l*b;
		perimeter=2*(l+b);
		cout<<"perimeter is :"<<perimeter<<endl;
		cout<<"area is :"<<area<<endl;
	}
};
main()
{
	rectangle area;
	rectangle perimeter;
	perimeter.read();
	perimeter.mul();
	area.read();
    area.mul();
}

