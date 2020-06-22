#include<iostream>
#include<math.h>
using namespace std;
void check(int a, int b, int c)
{	if((b*b-4*a*c)<0)
		{	cout<<"Throwing the Exception."<<endl;
			throw;}}
void root(int a, int b, int c)
{	check(a,b,c);
	float root1,root2;
	root1=(-b+sqrt(b*b-4*a*c))/(2*a);
	root2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"Roots are: "<<root1<<","<<root2<<endl;}
void my_sqrt()
{cout<<"Exception caught inside my_sqrt(). Roots are not real.\nTerminate handler called."<<endl;
	abort();}
int main()
{	set_terminate(my_sqrt);
	int a,b,c;
	cout<<"Quadratic equation is of the form: ax^2 + bx + c = 0 \n Provide values of a, b and c.\n";
	cin>>a>>b>>c;
	root(a,b,c);}
