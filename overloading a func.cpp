#include<iostream>
using namespace std;
class DemoOverloading
{
	public:
		void add()
		{
			cout<<"am inside add func with no arguments";
		}
			void add(int a,int b)
		{
			cout<<"am inside add (int,int) sum ="<<a+b;
		}
			void add(float a,float b)
		{
			cout<<"am inside add (float,float) sum="<<a+b;
		}
			void add(int a,float b)
		{
			cout<<"am inside add (int ,float) sum="<<a+b;
		}
		
};

