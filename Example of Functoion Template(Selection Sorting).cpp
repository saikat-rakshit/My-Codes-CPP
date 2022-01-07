//Selection Sorting using Functoion Template
#include<iostream>
using namespace std;

template<class T>
void selection(T a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
template<class X>
void swap(X &a,X &b)
{
	X temp=a;
	a=b;
	b=temp;
}
int main()
{
	int y[10]={5,4,3,1,9,6,2,7,8,10};
	cout<<"Unsorted Array -> ";
	for(int i;i<10;i++)
	{
		cout<<y[i]<<" ";
	}
	selection(y,10);
	cout<<"\nSorted Array -> ";
	for(int i;i<10;i++)
	{
		cout<<y[i]<<" ";
	}
	return 0;
}
