//Example of Function Template by Swapping Values
#include<iostream>
using namespace std;

template<class T>

void swap(T &x,T &y)
{
	T temp=x;
	x=y;
	y=temp;
}
void function(int m,int n,float a,float b)
{
	cout<<"Before swapping the values of M and N are "<<m<<" "<<n;
	swap(m,n);
	cout<<"After swapping the values of M and N are "<<m<<" "<<n;
	
	cout<<"Before swapping the values of A and B are "<<a<<" "<<b;
	swap(a,b);
    cout<<"After swapping the values of A and B are "<<a<<" "<<b;
}
int main()
{
	function(10,20,1.5,2.5);
	return 0;
}
