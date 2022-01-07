//Hierarchical Inheritence_Public Derivation
#include<iostream>
using namespace std;
class Base
{
  public:
      int x,y;
	void get_xy()
	   {
	    cout<<"Enter the value for x and y: ";
		cin>>x>>y; 	
       }
};
class A:public Base
{
  public:
	void add()
	   {
	   	cout<<"\nThe value of x="<<x<<endl;
	   	cout<<"The value of y="<<y<<endl;
	    cout<<"x+y= "<<x+y<<endl;
       }
};
class B:public Base
{
  public:
	void multi()
	   {cout<<"\nThe value of x="<<x<<endl;
	   	cout<<"The value of y="<<y<<endl;
	    cout<<"x*y= "<<x*y<<endl;
       }
};
class C:public Base
{
  public:
	void subs()
	   {cout<<"\nThe value of x="<<x<<endl;
	   	cout<<"The value of y="<<y<<endl;
	    cout<<"x-y= "<<x-y<<endl;
       }
};
int main()
{
	A ob1;
	ob1.get_xy();
	ob1.add();
	B ob2;
	ob2.get_xy();
	ob2.multi();
	C ob3;
	ob3.get_xy();
	ob3.subs();
	return 0;
}
