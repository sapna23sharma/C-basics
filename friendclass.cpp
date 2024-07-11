#include<iostream>
using namespace std;
class A{
	private:
		int a;
		public:
			A(){a=0;}
			friend class B; //friend class
			
			
};
class B{
	private:
		int b;
		public:
			void showA(A&x){
				//since B is friend of A, it can access private member of A
				cout<<"A::a="<<x.a;
				
			}
};
int main(){
	A a;
	B b;
	b.showA(a);
	return 0;
}
