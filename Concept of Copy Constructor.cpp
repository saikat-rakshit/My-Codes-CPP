//Example of Copy Constructor
#include<iostream>
using namespace std;

class CC
{
	int x;
	public:
		CC(int m)
		{
			x=m;
		}
		CC(CC &ob)      //Copy Constructor
		{
			x=ob.x;
		}
		int display()
		{
			return x;
		}
};
int main()
{
	CC A(10);
	cout<<"The value of X in oobject A is "<<A.display()<<endl;
	
	CC B=A;          //
    CC D(A);        //
    cout<<"The value of X in oobject B is "<<B.display()<<endl;
    cout<<"The value of X in oobject D is "<<D.display()<<endl;
    return 0;
}
