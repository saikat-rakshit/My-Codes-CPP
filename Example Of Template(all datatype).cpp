//Example Of Template
#include<iostream>
using namespace std;

template<class T*>
class Test
{
	T1 a;
	T2 b;
	public:
		Test(T1 x,T2 y)
		{
	      a=x;
	      b=y;
		}
		void show()
		{
			cout<<"The value of A= "<<a<<" "<<"The valu of B= "<<b<<endl;
		}
};
int main()
{
	Test <float,int> ob1(1.5,120);
	Test <int,char> ob2(200,S);
	
	ob1.show();
	ob2.show();
	
	return 0;
}
