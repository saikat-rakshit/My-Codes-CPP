//Multiple Catch statements
#include<iostream>
using namespace std;

void test(int x)
{
	try
	{
		cout<<"Now we are inside the try Block.\n";
		if(x==1)  throw x;
		else
		   if(x==0)  throw 'S';
		else
		   if(x==-1)  throw 2.0;
		cout<<"End of try Block.\n";
	}
	catch(char C)
	{
		cout<<"Caught A Character."<<endl;
	}
	catch(int I)
	{
		cout<<"Caught A Intiger."<<endl;
	}
	catch(double D)
	{
		cout<<"Caught A Double."<<endl;
	}
	cout<<"End of try catch Block."<<endl;
}
int main()
{
	cout<<"Testing multiple catches.\n";
	
	cout<<"\nX=1\n";
	test(1);
	
	cout<<"\nX=0\n";
	test(0);
	
	cout<<"\nX=-1\n";
	test(-1);
	
	cout<<"\nX=m\n";
	test('s');
	
	cout<<"\nX=5\n";
	test(5);
	
	return 0;
}
