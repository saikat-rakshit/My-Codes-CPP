//Example of Exception Handling->Invoking function that generates exception
#include<iostream>
using namespace std;

void devide(int x,int y,int z)
{
	if((x-y)!=0)
	{
		int result=z/(x-y);
		cout<<"Result= "<<result<<endl;
	}
	else
	{
		throw(x-y);
	}
}
int main()
{
	try
	{
		cout<<"Now we are inside try block.\n";
		devide(10,20,30);
		devide(10,10,20);
	}
	catch(int i)
	{
		cout<<"Caught the exception.\n";
		cout<<"i= "<<i;
	}
	return 0;
}
