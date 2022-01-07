//Unary Oparator Overloading with friend function
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
		friend void operator-(overload &ob);
};
void operator-(overload &ob)
{
	ob.a=-ob.a;
	ob.b=-ob.b;
	ob.c=-ob.c;
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
