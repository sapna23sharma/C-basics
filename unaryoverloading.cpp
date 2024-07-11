#include<iostream>
using namespace std;
class distance1
{
	private:
	int feet;//0 to infinte
	int inches;//0 to 12
	public:
		//required constructor
		distance1(){
			feet=0;
			inches=0;
		}
		distance1(int f,int i)
		{
			feet=f;
			inches=i;
		}
		//method to display distance
		void displaydistance()
		{
			
			cout<<"f:"<<feet<<"i:"<<inches<<endl;
		}
		//overloaded minus(-) operator
		distance1 operator - (){
			feet=-feet;
			inches=-inches;
			return distance1(feet,inches);
		}
};
int main()
{

distance1 D1(-12,55);
distance1 D2(-5,11);
	-D1;//apply negation 
	D1.displaydistance1();//display D1
	-D2;//apply negation
	D2.dispalydistance();//display D2
	return 0;
}

