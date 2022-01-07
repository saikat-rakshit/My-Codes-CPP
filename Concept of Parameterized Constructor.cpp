//Concept of Parameterized Constructor
#include<iostream>
using namespace std;
class A
{
		int x,y;
	public:
		A(int m,int n)      //Parameterized Constructor
		{
			x=m;
			y=n;
		}
		int getx()
		{
			return x;
		}
			int gety()
		{
			return y;
		}
};
int main()
{
	A ob(10,15);                                      //Constructor called
	cout<<"X="<<ob.getx()<<"\n"<<"Y="<<ob.gety();    //Acess values assigned by Constructor   
    return 0;
}
