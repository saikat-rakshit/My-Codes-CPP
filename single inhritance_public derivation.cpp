//W.a.P of single inheritance : Public Derivation
#include<iostream>
using namespace std;
class X
{
	int a;
	public:
	  int b;
	  void get_ab()
	  {
	  	cout<<"Enter two numbers: ";
	  	cin>>a>>b;   
    	}
    	int get_a()
    	{
    		return a;
		}
		void show_a()
		{
			cout<<"The value of a:"<<a<<endl;
		}
	};
class Y: public X
 {
	int c;
	public:
	    void add()
		{
		c=b+get_a();	
		}
		void display()
		{
		cout<<"The value of b:"<<b<<endl;
		cout<<"The Result is:"<<c<<endl;
		}
};
int main()
{
	Y ob;
	ob.get_ab();
	ob.show_a();
	ob.add();
	ob.display();
	
	return 0;
}
