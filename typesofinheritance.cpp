//c++ program to explain single inheritance
#include<iostream>
using namespace std;
//base class
class vehicle{
	public:
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
		}
		void display()
		{
			cout<<"base class display";
		}
};
//sub class derived from two base classes
class car:public vehicle{
	
};
//main function
int main()
{
	//creating object of sub class will
	//invoke the constructor of base classes
	car obj;
	obj.display();
	return 0;
}
