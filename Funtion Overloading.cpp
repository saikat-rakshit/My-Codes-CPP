//Example of function oveloading
#include<iostream>
using namespace std;
int area(int);                  //Prototypes
int area(int,int);
float area(float);
int main()
{
	cout<<"The area of a square is="<<area(4)<<endl;
	cout<<"The area of a rectangle is="<<area(5,7)<<endl;
	cout<<"The area of a circle is="<<area(4.0F);
	return 0;
}
int area(int x)
{
	return(x*x);
}
int area(int l,int b)
{
	return(l*b);
}
float area(float r)
{
	return(3.14*r*r);
}
