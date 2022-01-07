//Working of this pointer with arguments
#include<iostream>
using namespace std;
class X
{
	int a,b;
	public:
		void show(int x,int y)
		{
			a=x;
			b=y;
			cout<<"Object Address: "<<this<<endl;
			cout<<"A="<<a<<endl;
			cout<<"B="<<this->b<<endl;
		}
};
int main()
{
  X ob;
  ob.show(10,20);
  return 0;
}
