//Hybrid Inheritance(Single+Multiple)_Public Derivation
#include<iostream>
using namespace std;
class A
{
   protected:
        int x;
	public:
        void getx()
	      {
		   cout<<"Enter the value for x:";
		   cin>>x;
	      }
	    show_x()
		{
			return  x;
		} 
};
class B:public A
{
	protected:
        int y;
	public:
        void gety()
	      {
		   cout<<"Enter the value for y:";
		   cin>>y;
	      }
	    show_y()
		{
			return y;
		} 
};
class C
{
	protected:
        int z;
	public:
        void getz()
	      {
		   cout<<"Enter the value for z:";
		   cin>>z;
	      }
	    show_z()
		{
			return z;
		} 
};
class D:public B,public C
{
	public:
		void display()
		{
		cout<<"\nThe value of x="<<show_x()<<endl;
		cout<<"\nThe value of y="<<show_y()<<endl;
		cout<<"\nThe value of z="<<show_z()<<endl;
		cout<<"\nx+y+z="<<show_x()+show_y()+show_z()<<endl;	
		cout<<"\nx*y*z="<<show_x()*show_y()*show_z();
		}
};
int main()
{
	D ob;
	ob.getx();
	ob.gety();
	ob.getz();
	ob.show_x();
	ob.show_y();
	ob.show_z();
	ob.display();
	return 0;
}
