//c++ program to explain multiple inheritance
#include<iostream>
using namespace std;
//first base class
class vehicle{
	public:
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
		}
};
//second base class
class fourwheeler{
	public:
		fourwheeler()
		{
			cout<<"this is a 4 wheeler vehicle"<<endl;
		}
};
//sub class derived from two base classes
class car:public vehicle,public
fourwheeler{
};
//main function
int main()
{
	//creating object of sub class will invoke the constructor of base classes
	car obj;
	return 0;
}
