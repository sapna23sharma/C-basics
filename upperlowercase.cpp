#include<iostream>
using namespace std;
main()
{
	char a;
cout<<"input the character\n";
cin>>a;
if((a>='a' && a<='z')||(a>='A' && a<='Z'))
{
//cout<<"its an alphabet"<<endl;

if(a>='A' && a<='Z')
{
	cout<<"upper case"<<endl;
	
}
else
{

cout<<"lower case"<<endl;
    }
}
else
cout<<"not an alphabet";
}
