#include<iostream>
using namespace std;
main()
{
	int f=1,n;
	cout<<"enter the number";
	cin>>n;
		while(n>0)
	{
	f=f*n;
	if(n==1)
	{
		cout<<n<<" = ";
	}
	else
	{
	
		cout<<n<<" x ";

}
		n--;
}
cout<<f;


}
