#include<iostream>
using namespace std;
template <class T>
T getMax(T a,T b)
{
	return(a>b)?a:b;
}
int main()
{
	cout<<"maximum of 10 and 20 is:"<<getMax(10,20)<<endl;
	return 0;
}

