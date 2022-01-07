//To find out the maximum of eo private data members of two classes by using friend function
#include<iostream>
using namespace std;
class B;                           //Forward Declaration
class A
{
	int x;
	public:
			void get_x()
		{
			cout<<"Enter the value of X:";
			cin>>x;
		}	
		friend int max(A,B);
};
class B
{
	int y;
	public:
	 void get_y()
	{
		cout<<"Enter the value of Y:";
		cin>>y;	
	}
	friend int max(A,B);
};
int max(A ob1,B ob2)
{
	if(ob1.x>ob2.y)
	  return(ob1.x);
	  else
	  return(ob2.y);
}
int main()
{
	A obj1;
	B obj2;
	obj1.get_x();
	obj2.get_y();
	cout<<"The maximum of two numbers="<<max(obj1,obj2);
	return 0;
}
