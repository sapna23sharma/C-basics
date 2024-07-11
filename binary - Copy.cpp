#include<iostream>
using namespace std;
main()
{
	int A,B,c,d,e,f,g,h;
	cout<<"enter the values of A and B";
	cin>>A>>B;
	c= A&B;
	cout<<"binary and operator"<<c<<endl;
	d=A|B;
	cout<<"binary or operator"<<d<<endl;
	e=A^B;
	cout<<"binary xor operator"<<e<<endl;
	f=~A;
	cout<<"binary ones complement"<<f<<endl;
	g=A<<2;
	cout<<"binary left shift"<<g<<endl;
	h=A>>2;
	cout<<"binary right shift"<<h<<endl; 
	
}
