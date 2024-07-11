
#include<iostream>
using namespace std;
main()
{
	char a,b;
	cout<<"enter the numbers :\n";
	cin>>a>>b;
	switch(a,b)
	{
		case '+':
			cout<<"add";
			break;
			
			case '-':
				cout<<"subtract";
				break;
					case '*':
					cout<<"multiply";
					break;
					    case '/':
						cout<<"divide";
								break;
	}

}

