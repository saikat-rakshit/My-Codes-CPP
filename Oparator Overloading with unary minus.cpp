//Oparator Overloading with unary minus
#include<iostream>
using namespace std;

class overload
{
	int a,b,c;
	public:
		void getdata(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void display()
		{
			cout<<"A= "<<a<<endl;
			cout<<"B= "<<b<<endl;
			cout<<"C= "<<c<<endl;
		}
		void operator-();
};
void overload::operator-()
{
	a=-a;
	b=-b;
	c=-c;
}
int main()
{
	overload ov;
	
	ov.getdata(10,-30,50);
	cout<<"Before Overloading:>\n";
	ov.display();
	
	-ov;
	cout<<"After Overloading:>\n";
	ov.display();
	
	return 0;
}
