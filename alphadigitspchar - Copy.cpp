#include<iostream>
using namespace std;
main()
{
	char a;
	cout<<"enter character\n";
cin>>a;
if((a>='a' && a<='z')||(a>='A' && a<='Z'))
{
	cout<<"alphabet";
    }
else if(a>='0' && a<='9') 
{
  cout<<"digit";	
   }
else
{
	cout<<"special character";
   
            }
}


