#include<iostream>
using namespace std;
class line{
	public:
		void setlength(double len);
		double getlength(void);
		line();//this is constructor
		private:
			double length;
};
//member functions definitions including constructor
line::line (void){
	cout<<"object is being created"<<endl;
}
void line::setlength(double len)
{
	length=len;
}
double line::getlength(void){
	return length;
}
//main function for the program
int main(){

line line;
//set line length
line.setlength(6.0);
cout<<"length of line: "<<line.getlength()<<endl;
return 0;
}
