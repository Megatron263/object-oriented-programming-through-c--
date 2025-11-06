#include<iostream>
using namespace std;
long factorial(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*factorial(n-1);
}
int main()
{
	int num,result;
	cout<<"enter a positive integer:";
	cin>>num;
	if (num <0)
	{
		cout<<"fact not defined for negative numbers:"<<endl;
		
	}
	else{
		result=factorial(num);
		cout<<"factorial of"<<num<<"="<<result<<endl;
	}
	return 0;
}
