//function overloading
#include<iostream>
using namespace std;
class test
{
	public:
		int main(int s)
		{
			cout<<s<<"\n";
			return 0;
		}
		int main(char*s)
		{
			cout<<s<<endl;
			return 0;
		}
		int main(int s,int m)
		{
			cout<<s<<" "<<m;
			return 0;
		}
};
int main()
{
	test obj;
	obj.main(3);
	obj.main("i love c++");
	obj.main(9,6);
	return 0;
}
