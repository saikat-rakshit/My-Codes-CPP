//Working of this pointer
#include<iostream>
using namespace std;
class X
{
	int a,b;
	public:
		void show()
		{
			a=10;
			b=20;
			cout<<"Object Address: "<<this<<endl;
			cout<<"A="<<this->a<<endl;
			cout<<"B="<<this->b<<endl;
		}
};
int main()
{
  X ob;
  ob.show();
  return 0;
}
