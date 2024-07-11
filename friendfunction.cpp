//friend function
#include<iostream>
using namespace std;
class B;
class A
{
	public:
		void showB(B&);//B& pass by reference
		};
		class B
		{
			private:
				int b;
				public:
					B(){ b=0;}
					friend void A::showB(B&x);//friend function
		};
		void A::showB(B&x)
		{
			//since show() is friend of B , it can access private members of B
			cout<<"B::b="<<x.b;
		}
		int main()
		{
			A a;
			B x;
			a.showB(x);
			return 0;
		}
