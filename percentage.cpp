#include<iostream>
using namespace std;
main()
{
	int s1,s2,s3,s4,s5;
	float f;
	float g;
	float h;
	cout<<"enter the values of s1,s2,s3,s4,s5";
	cin>>s1>>s2>>s3>>s4>>s5;
	f= s1+s2+s3+s4+s5;
	cout<<"total of all subjects"<<f<<endl;
	g= f/5;
	cout<<"average of all subjects"<<g<<endl;
	h= f*100/500;
	cout<<"percentage of all subjects"<<h<<endl;
		if(h>=50)
		{
		cout<<"pass";
	}
		else
		{
			cout<<"fail";
		}
	}

