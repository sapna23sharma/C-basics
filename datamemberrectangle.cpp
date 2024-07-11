#include<iostream>
using namespace std;
class rectangle{
	int l,b;
	public:
		rectangle();
		read();
		area();
};
//member functions definitions including constructor
rectangle::rectangle (void)

void rectangle::setarea(double ar)
{
	area=ar;
}
double rectangle::getarea(void){
	return area;
}
//main function for the program
int main(){
int l=2,b=3,c;
c=l*b;
rectangle rectangle;
rectangle.area();
cout<<"area is: "<<c<<length.area<<endl;
return 0;
}
