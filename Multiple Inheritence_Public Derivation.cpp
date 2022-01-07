//Multiple Inheritance_public drivation
#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	   public:
	   	void getx()
	   	{
	   		cout<<"Enter the value for x: ";
	   		cin>>x;
		}
};
class B
{
	protected:
		int y;
	   public:
	   	void gety()
	   	{
	   		cout<<"Enter the value for y: ";
	   		cin>>y;
		}
};
class C: public A,public B
{
	public:
		 void display()
		 {
		 	cout<<"\nThe value of x: "<<x<<endl;
			cout<<"\nThe value of y: "<<y<<endl;
			cout<<"\nThe multiplication of the two numbers: "<<x*y<<endl;    
            cout<<"\nThe addition of the two numbers: "<<x+y<<endl;
		 }
};
int main()
{
	C ob;
	ob.getx();
	ob.gety();
	ob.display();
	return 0;
}

