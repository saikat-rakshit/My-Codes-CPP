//Oparetor Overloadng Binary Oparetor+
#include<iostream>
using namespace std;

class example
{
	float a,b;
	public:
		example() { }
		example(float real,float imag)
		{
			a=real;
			b=imag;
		}
		example operator+(example);
		void display();
};
example example::operator+(example x)
{
	example ob;
	ob.a=a+x.a;
	ob.b=b+x.b;
	return(ob);
}
void example :: display()
{
	cout<<a<<"+j"<<b<<"\n";
}
int main()
{
	example E1,E2,E3;  //Null Contsructor
	E1=example(2.0,3.0);
	E2=example(4.0,5.0);
	
	E3=E1+E2;  //E1.operator+(E2)
	
	cout<<"E1= ";
	E1.display();
	cout<<"E2= ";
	E2.display();
	cout<<"E3= ";
	E3.display();
	
	return 0;
}
