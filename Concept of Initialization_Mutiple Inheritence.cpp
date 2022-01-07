//Concept of Initiaalization_Mutiple Inheritence
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
	float p,q;
	public:
		B(float a,float b):p(a),q(b+p)
		{
			cout<<"Class B initialized.\n";
		}
		void show_B()
		{
			cout<<"P= "<<p<<endl;
			cout<<"Q= "<<q<<endl;
		}
};
class D:public B,public A
{
	int u,v;
	public:
		D(int a,int b,float c):A(a*3),B(c,c),u(a),v(b)
		{
			cout<<"Class D initialized.\n"<<endl;
		}
		void show_D()
		{
			cout<<"U="<<u<<endl;
			cout<<"V="<<v<<endl;
		}
};
int main()
{
	D ob(3,5,2.5);
	ob.show_A();
	ob.show_B();
	ob.show_D();
	return 0;
}
