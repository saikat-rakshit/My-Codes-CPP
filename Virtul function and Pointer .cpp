//Virtul function and Pointer 
#include<iostream>
using namespace std;
class A
{
	public:
	 virtual void display()
	 {
	 	cout<<"Display A.\n";
	 }
	 virtual void show()
	 {
	  	cout<<"Show A.\n";
	 }
};
class B:public A
{
	public:
		virtual void display()
	 {
	 	cout<<"Display B.\n";
	 }
	    virtual void show()
	 {
	  	cout<<"Show B.\n";
	 }
};
int main()
{
	A oba;
	B obb;
	A *p;
	
	p=&oba;
	p->display();
	p->show();
	
	p=&obb;
	p->display();
	p->show();
	
	return 0;
}
