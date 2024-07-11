//abstract class- class in which pure virtual function forms (no object forms)
#include<iostream>
using namespace std;
class base
{
	int x;
	public:
		virtual void fun()=0;
		int getx(){return x;}
	};
//this class ingerits from base and implements fun()
class derived:public base
{
	int y;
	public:
		void fun(){
			cout<<"fun() called";
		}
};
int main(void)
{
	derived d;
	d.fun();
	return 0;
}
