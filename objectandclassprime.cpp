#include<iostream>
using namespace std;
class prime
{
int n,i;
public:
	read()
	{
	int n,i,flag=0;
	
	cout<<"enter the number :";
	cin>>n;

 if(n<=1)
{
return false;
	
}

for(i=2;i<n;i++)
{
	if(n%i==0)
	{
	
		return false;
		
	}
}

return true;
}
};
int main()
{
prime obj;
int flag =obj.read();
if(flag==0)
{
	cout<<"not a prime no.";
}
else
{
	cout<<"prime no.";
}
return 0;
}


