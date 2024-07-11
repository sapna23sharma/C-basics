#include<iostream>
using namespace std;
class rectangle{
	public:
		rectangle(); //this is constructor declaration
		~rectangle(); //this is destructor:declaration
		read();
		area();
		private:
			double length,breadth;
			
};
//member functions definitions including constructor
rectangle::read()
{
	length=3;
	breadth=5;
}
rectangle::area()
{
	area=length*breadth;
	cout<<"area : "<<area<<endl;
}
rectangle::reactangle(){
	cout<<"rectangle being created"<<endl;
	
}
rectangle::~rectangle(){

	cout<<"rectangle being deleted"<<endl;
}


//main function for the program


int main(){
	
	rectangle r1;
	r1.read();
	r1.area;
	
	return 0;
}
