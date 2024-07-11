#include<iostream>
using namespace std;
class distance11
{
	private:
	int feet;//0 to infinte
	int inches;//0 to 12
	public:
		//required constructor
		distance11(){
			feet=0;
			inches=0;
		}
		distance11(int f,int i)
		{
			feet=f;
			inches=i;
		}
		//method to display distance
		void displaydistance()
		{
			
			cout<<"f:"<<feet<<"i:"<<inches<<endl;
		}
			distance11  operator - (){
			feet=-feet;
			inches=-inches;
			return distance11(feet,inches);
		}
	};

		
int main()
{

distance11 D1();
distance11 D2();
}
