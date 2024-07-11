//fuction with same name and signature in both base and derived class

#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()
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
	base*b;//base class
	derived d;//derived class object
	b=&d;
	b->show();//late binding
}
