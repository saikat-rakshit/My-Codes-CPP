//Catching All Exceptions
#include<iostream>
using namespace std;

void test(int x)
{
	try
	{
		if(x==0) throw x;
		if(x==-2) throw 'x';
		if(x==1) throw 2.0;
		cout<<"End of try Block.\n";
	}
	catch(...)
	{
		cout<<"Caught an Exception.\n";
	}
}
int main()
{
	cout<<"Testing Generic Catch."<<endl;
	
	cout<<"\nX=1\n";
	test(1);
	
	cout<<"\nX=0\n";
	test(0);
	
	cout<<"\nX=-2\n";
	test(-2);
	
	cout<<"\nX=m\n";
	test('s');
	
	cout<<"\nX=5\n";
	test(5);
	
	return 0;
}
