//How constructor work in Derived Class in Multiple Inhritence
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		A(int i)
		{
			x=i;
			cout<<"Class A initialized.\n";
		}
		void show_A()
		{
			cout<<"X= "<<x<<endl;
		}
};
class B
{
	int y;
	public:
		B(int i)
		{
			y=i;
			cout<<"Class b initialized.\n";
		}
		void show_B()
		{
			cout<<"Y= "<<y<<endl;
		}
};
class C: public A, public B
{
	int p,q;
	public:
		C(int a,int b,int c,int d) : A(a),B(b)
		{
			p=c;
			q=d;
			cout<<"Class D initialized.\n";
		}
		void show_C()
		{
			cout<<"P= "<<p<<endl;
			cout<<"Q= "<<q<<endl;
	    }
};
int main()
{
	C ob(10,20,30,40);
	ob.show_A();
	ob.show_B();
	ob.show_C();
	return 0;
}
