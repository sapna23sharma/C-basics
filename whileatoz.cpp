#include<iostream>
using namespace std;
main()
{
	char a;
	cout<<"enter character";
	cin>>a;
	while(a>='a' && a<='z')
	{
		cout<<a<<" ";
		a++;
	}
}
