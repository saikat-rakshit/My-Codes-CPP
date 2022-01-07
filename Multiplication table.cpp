//Multiplication table of given number and range
#include<iostream>
using namespace std;
int main()
{
	double n,r;
	cout<<"Enter a number for multiplication table-> ";
	cin>>n;
	cout<<"Enter a range for multiplication table-> ";
	cin>>r;
	cout<<"The table is : \n";
	for(int i=1;i<=r;i++)
	{
    	cout<<n<<" * "<<i<<"= "<<n*i<<endl;
	}
	return 0;
}
