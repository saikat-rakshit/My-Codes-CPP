//Oparetor Overloadng Binary Oparetor+ with feiend function
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
		friend example operator+(example,example);
		void display();
};
example operator+(example x,example y)
{
	return example((x.a+y.a),(x.b+y.b));
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
	
	E3=E1+E2;  //operator+(E1,E2)
	
	cout<<"E1= ";
	E1.display();
	cout<<"E2= ";
	E2.display();
	cout<<"E3= ";
	E3.display();
	
	return 0;
}
