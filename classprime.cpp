#include<iostream>
using namespace std;
class prime
{
int n,i;
public:
	read()
	{
	int n,i=2,flag=0;
	
	cout<<"enter the number :";
	cin>>n;

while(i<n)
{
	if(n%i==0)
	{
	
		flag=1;
		break;
		
	}
	i++;
}
}
};
int main()
{
prime obj;
int flag=obj.read();
if( flag==0)
{
	cout<<" not prime no.";
}
else
{
	cout<<"prime no.";
}
return 0;

}



