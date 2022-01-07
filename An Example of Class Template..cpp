//An Example of Class Template
#include<iostream>
using namespace std;

template<class T>
class A
{
	T* v;
	public:
		A()
		{
			v=new T[3];
			for(int i=0;i<3;i++)
			v[i]=0;
		}
		A(T* a)
		{
			for(int i=0;i<3;i++)
			v[i]=a[i];
		}
		T operator*(A &y)
		{
			T sum=0;
			for(int i=0;i<3;i++)
			sum=sum+this->v[i]*y.v[i];
			return sum;
		}
};
int main()
{
	int x[3]={1,2,3};
	int y[3]={4,5,6};
	A<int>v1;
	A<int>v2;
	v1=x;
	v2=y;
	int result=v1*v2;
	cout<<"Result="<<result<<"\n";
	return 0;
}
