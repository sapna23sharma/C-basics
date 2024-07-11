//c++ program for hybrid inheritance
#include<iostream>
using namespace std;
//base class
class vehicle 
{
	public:
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
		}
};
//base class
class fare
{
	public:
		fare()
		{
			cout<<"fare of vehicle"<<endl;
			
		}
};
//first sub class
class car:public vehicle
{
};
//second subclass
class bus:public vehicle,public fare
{
};
//main function
int main()
{
	//creating object of sub class will
	//invoke the constructor of base class
	bus obj2;
	return 0;
}
