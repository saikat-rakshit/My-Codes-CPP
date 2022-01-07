//Example of Class Template
#include<iostream>
using namespace std;

template<class T>
class vector                     //Type Vector
{
	T* v;
	public:
		vector()
		{
			v=new T[3];
			for(int i=0;i<3;i++)
		    	v[i]=0;
		}
		vector(T* a)
		{
			for(int i=0;i<3;i++)
			    v[i]=a[i];
		}
		T operator*(vector &y)
		{
			T sum=0;
			for(int i=0;i<3;i++)
			    sum=sum+this->v[i]*y.v[i];
			return sum;
		}
};
int main()
{
	float x[3]={1.1,2.2,3.3};
	float y[3]={4.4,5.5,6.6};
	
	vector <float> v1;
	vector <float> v2;
	
	v1=x;
	v2=y;
	
	float result=v1*v2;
	cout<<"The Result="<<result;
	return 0;
}
	
