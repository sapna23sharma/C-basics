#include<iostream>
using namespace std;
class base{
	public:
		void show()
		{
			cout<<"base class";
		}
};
class derived:public base
{
	public:
		void show()
		{
			cout<<"derived class";
		}
};
int main()
{
	base*b;//base class pointer
	derived d;//derived class object
	b=&d;
	b->show();//early inding occurs
	}	

