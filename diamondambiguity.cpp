#include<iostream>
using namespace std;
class person{
	//data member of person
	public:
		person(int x){
			cout<<"person::person(int)called"<<endl;//syntax of constructor
			
		}
};
class faculty : public person{
	//data members of faculty
	public:
		faculty(int x):person(x){
			cout<<"faculty::faculty(int)called"<<endl;
		}
};
class student:public person{
	//data member of student
	public:
		student(int x):person(x){
			cout<<"student::student(int) called"<<endl;
		}
};
class TA:public faculty,public student{
	public:
		TA(int x):student(x),faculty(x){
			cout<<"TA::TA(int)called"<<endl;
		}
};
int main()
{
	TA ta1(30);
}
