//Max_Min Checking
#include<iostream>
using namespace std;
int main()
{
	int arr[6]={2,3,-1,4,6,-9},max,min,n;
//	cout<<"Enter how many elements you want : ";
//	cin>>n;
//	cout<<"Enter elements one by one : ";
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
	max=min=arr[0];
	for(int i=1;i<6;i++)
	{
		if(arr[i]>max){ max = arr[i]; }
		if(arr[i]<min){ min = arr[i]; }
	}
	cout<<"maxElemant:-  "<<max<<endl;
	cout<<"minElement:- "<<min;
}