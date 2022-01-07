//Check the number is Armstrong or not
#include<iostream>
using namespace std;
int main()
{
	int n,r,s=0,P;
	cout<<"Enter any number: ";
	cin>>n;
	P=n;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	//	cout<<"  r="<<n%10<<"   s="<<s+(r*r*r)<<"    n="<<n/10<<endl;
	}
	if(s==P)
	cout<<"The number "<<P<<" is Armstrong.";
	else
	cout<<"The number "<<P<<" is not Armstrong.";
	return 0;
}
