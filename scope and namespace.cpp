#include<iostream>
using namespace std;
int x=100;
namespace MyNamespace
{
	int value=50;
	void show()
	{
		cout<<"inside mynamespace,value="<<value<<endl;
	}
}
int main()
{
	int x=10;
	cout<<"local x="<<x<<endl;
	cout<<"global x="<<::x<<endl;
	cout<<"namespace value="<<MyNamespace::value<<endl;
	MyNamespace::show();
	return 0;
	
}
