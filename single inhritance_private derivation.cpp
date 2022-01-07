//W.a.P of single inheritance : Private Derivation
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
class Y: private X
 {
	int c;
	public:
	    void add()
		{
		get_ab();
		c=b+get_a();	
		}
		void display()
		{
		show_a();
		cout<<"The value of b:"<<b<<endl;
		cout<<"The Result is:"<<c<<endl;
		}
};
int main()
{
	Y ob;
	ob.add();
	ob.display();
	
	return 0;
}
