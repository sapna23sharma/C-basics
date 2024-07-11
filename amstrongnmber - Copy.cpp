#include<iostream>
#include<math.h>
using namespace std;
main()
{
   int n,t,sum=0,c=0;
cout<<"enter the number";
cin>>n;
int num=n;
while(n>0)
{
n=n/10;
c++;
}
n=num;
while(n>0)
{

t=n%10;
sum=sum+pow(t,c);
n=n/10;
}

if(num==sum)
{

cout<<"its an amstrong number";
}
else
{
cout<<"not an amstrong number";
}


}
