#include<iostream>
using namespace std;
class box
{
	double length;//length of box
	double breadth;
	double height;
	public:
		double volume(void)
		{
			
			return length*breadth*height;
		}
		void length(double len){
			length=len;
		}
		void breadth(double bre){
			breadth=bre;
		}
		void height(double hei){
			height=hei;
		}
		//overload+operator to add two box objects
		box operator+(const box&b){
			box box;
			box.length=length+b.length;
			box.breadth=breadth+b.breadth;
			box.height=height+b.height;
			return box;
		}
};
//main function
int main(){
	box box 1;//declare box1 of type box
	box box 2;//declare box2 of type box
	box box 3;//declare box3 of type box
	double volume=0.0;//store the volume of a box here
	//box1 specification
	box 1.length(6.0);
	box 1.breadth(7.0);
	box 1.height(5.0);
	//box2 specification
	box 2.length(8.0);
	box 2.breadth(9.0);
	box 2.height(10.0);
}
//volume of box1
volume=box 1.volume();
cout<<"volume of box 1:"<<volume<<endl;
//volume of box2
volume=box 2.volume();
cout<<"volume of box 2:"<<volume<<endl;
//add two object as follows:
box 3=box 1+box 2;
//volume of box3
volume=box 3.volume();
cout<<"volume of box 3:"<<volume<<endl;
return 0;
}


