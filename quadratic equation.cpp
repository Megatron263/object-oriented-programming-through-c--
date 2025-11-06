#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter coefficients a,b,c";
	cin>>a>>b>>c;
	float discriminant=b*b-4*a*c;
	float root1,root2;
	if (a==0)
	{
		cout<<"this is not a quadratic equation (a cannot be 0)."<<endl;
	}
	else if(discriminant>0){
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		cout<<"roots are real and distinct"<<endl;
		cout<<"root1="<<root1<<endl;
		cout<<"root2="<<root2<<endl;	
	}
	else if(discriminant==0){
		root1=root2=-b/(2*a);
		cout<<"roots are real and equal"<<endl;
		cout<<"root1="<<root1<<endl;	
	}
	else{
		float realPart=-b/(2*a);
		float imagPart=sqrt(-discriminant)/(2*a);
		cout<<"roots are complex and imaginary"<<endl;
    	cout<<"root1="<<realPart<<"+"<<imagPart<<"i"<<endl;
		cout<<"root2="<<realPart<<"-"<<imagPart<<"i"<<endl;
				
	}
	return 0;
}
