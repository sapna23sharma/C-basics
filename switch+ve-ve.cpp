#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"enter the first number :\n";
	cin>>a;
	switch(a>0)
	{
		case 1:
			cout<<"positive";
			break;
			case 0:
				switch(a<0)
				{
					case 1:
						cout<<"negative";
						break;
			}
				
					switch(a=0)
					{
						case 0:
					cout<<"zero";
				break;
			}
	}
	
}
