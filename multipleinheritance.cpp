//c++ program to explain multiple inheritance
#include<iostream>
using namespace std;
// base class
class vehicle{
	public:
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
		}
};

class fourwheeler:public vehicle{
	public:
		fourwheeler()
		{
			cout<<"objects with 4 wheels are vehicles"<<endl;
		}
};
//sub class derived from two base classes
class car:public fourwheeler{

public:
car(){
	cout<<"car has 4 wheels"<<endl;
}
};
//main function
int main()
{
	//creating object of sub class will invoke the constructor of base classes
	car obj;
	return 0;
}
