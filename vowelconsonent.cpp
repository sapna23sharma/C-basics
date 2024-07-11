#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"input the character";
	cin>>ch;
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
{
cout<<"its an alphabet";

	
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		cout<<"vowel";
   }

	else
	{
		cout<<"consonant";
	}
}
	else
	{
		cout<<"its not an alphabet";
	}
}
