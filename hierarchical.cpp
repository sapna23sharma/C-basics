//c++ program to explain multiple inheritance
#include<iostream>
using namespace std;
//first base class
class g{
	public:
		g()
		{
			cout<<"this is a vehicle"<<endl;
		}
};
//second base class
class b:public g
{
public:

		b()
		{
			cout<<"vehicl"<<endl;
		}
};

	class a:public b
{
	public:
		a()
		{
			cout<<"vehic";
		}
};
class c:public b

{
	public:
		c()
		{
			cout<<"vehi";
		}
};
class e:public g
{
public:
		e()
		{
			cout<<"veh";
		}
		
};

class d:public e
{

	public:
		d()
		{
			cout<<"ve";
		}
};

class f:public e
{
	public:
		f()
		{
			cout<<"v";
		}
};

//main function
int main()
{
	a obj;
}





