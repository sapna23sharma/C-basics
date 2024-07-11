//c++ program to demonstrate implementation of inheritance
#include<bits/stdc++.h>
using namespace std;
//base class
class parent
{
	public:
		int p;
		
		};
		//sub class inheriting from base class(parent)
		class child: public parent
		{
			public:
				int c;
				
		};
		//main function
		int main()
		{
			child obj1;
			//an oject of class child has all data members
			//and member functions of class parent
			obj1.c=7;
			obj1.p=91;
			cout<<"child id is : "<<obj1.c<<endl;
			cout<<"parent id is : "<<obj1.p<<endl;
			return 0;
		}


