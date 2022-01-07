//Pointer to Objects
#include<iostream>
using namespace std;
class item 
{
	int itemcode;
	float itemprice;
	public:
		void getdata(int x,float y)
		{
			itemcode=x;
			itemprice=y;
		}
		void showdata()
		{
			cout<<"Item code: "<<itemcode<<endl;
			cout<<"Item price: "<<itemprice<<endl;
		}
};
int main()
{
	item *p=new item [2];
	item *d=p;
	int a,i;
	float b;
	for(i=0;i<2;i++)
	{
		cout<<"Enter itemcoad and price for item "<<i+1;
		cin>>a>>b;
		p->getdata(a,b);
		p++;
	}
	for(i=0;i<2;i++)
	{
		cout<<"Item: "<<i+1<<endl;
		d->showdata();
		d++;
	}
	return 0;
}
