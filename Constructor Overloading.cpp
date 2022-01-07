//Constructor Overloading
#include<iostream>
using namespace std;
class A
{
	public:
		int area;
	 A()          //Constructor with no parameters
		{
		area=0;
		}
     A(int a,int b)      //Constructor with parameters
		{
		area=a*b;
		}
		void display()
		{
		cout<<"The area is: "<<area<<endl;	
		}
};
int main()
{
	A ob1;
	A ob2(5,6);
	ob1.display();
	ob2.display();
	return 0;
}
