//friend but not part of any other class
#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A(){a=0;}
		
	friend void showA(A&);//A& pass by reference
		};
		void showA(A&x){//A&x=a
		//since showA() is a friend, it can access private member of A
		cout<<"A::a="<<x.a;
		}
		int main()
		{
			A a;
			showA(a);
			return 0;
		
		}
