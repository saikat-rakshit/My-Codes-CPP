//Overloading of Function Template
#include<iostream>
using namespace std;

template<class T>
void putdata(T x)
{
	cout<<"Template dispaly: "<<x<<endl;
}
void putdata(int x)          //overloads the generic display
{
	cout<<"Explicit display: "<<x<<endl;
}
int main()
{
	putdata(100);
	putdata(7.5);
	putdata('S');
	
	return 0;
}
