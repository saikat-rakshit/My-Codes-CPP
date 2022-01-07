//Example of Exception Handling ->try through catch statement
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter for A and B -> ";
	cin>>a>>b;
	int M=a-b;
	cout<<"M=A-B= "<<M;
	try
	{
		if(M!=0)
		{
			cout<<"\nResult(A/M)= "<<(a/M)<<endl;
		}
		else
		{
			throw(M);
		}
	}
	catch(int i)
	{
		cout<<"\nException caugth.\n";
		cout<<"Value of i= "<<i;
	}
	return 0;
}
