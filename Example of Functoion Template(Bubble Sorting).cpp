//Bubble Sorting using Functoion Template
#include<iostream>
using namespace std;

template<class T>
void bubble(T a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
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
	int y[5]={20,50,30,10,40};
	cout<<"Unsorted Array -> ";
	for(int i=0;i<5;i++)
	{
		cout<<y[i]<<" ";
	}
	bubble(y,5);
	cout<<"\nSorted Array -> ";
	for(int i=0;i<5;i++)
	{
		cout<<y[i]<<" ";
	}
	return 0;
}
