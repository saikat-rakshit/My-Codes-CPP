//Pointers to Derived objects
#include<iostream>
using namespace std;
class Base
{
	public:
		int b;
		void show()
		{
			cout<<"The value of b="<<b<<endl;
		}
};
class Derived: public Base
{
	public:
		int d;
		void show()
		{
			cout<<"The value of B="<<b<<endl;
	        cout<<"The value of D="<<d<<endl;	
		}
};
int main()
{
	//Base class object
	Base *bptr;
	Base bp;
	bptr=&bp;
	 
	bptr->b=100;
	cout<<"bptr points to base object."<<endl;
	bptr->show();
     
	//simple	
	Derived dp;
	bptr=&dp;
	bptr->b=300;
//	bptr->d=400;   //won't work
	bptr->show();
	
	//Derived class object
    Derived *dptr;
    dptr=&dp;
    dptr->b=500;
    dptr->d=600;
    dptr->show();
    
    //or
    
    ((Derived*)bptr)->b=700;
    ((Derived*)bptr)->d=800;
    ((Derived*)bptr)->show();
    
    return 0;
}
