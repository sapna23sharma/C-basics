#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter the values of a,b and c";
	cin>>a>>b>>c;
	switch((a>b)&(a>c))
	{
		case 1:
			cout<<"a is largest";
			break;
			switch ((b>a)&(b>c))
			case 2:
				cout<<"b is largest";
				break;
				switch ((c>a)&(c>b)):
					case 3:
					cout<<"c is largest";
					break;
					default:
						cout<<"invalid";


	}
}
