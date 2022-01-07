//Array of Pointers to Objects
#include<iostream>
#include<string.h>
using namespace std;
class city
{
	protected:
	char *name;
	int len;
	public:
		city()
		{
			len=0;
			name=new char[len+1];
		}
		void getname()
		{
			char *s;
			s=new char[20];
			cout<<"Enter city name: ";
			cin>>s;
			len=strlen(s);
		//	name=new char[len+1];
			strcpy(name,s);
		}
		void printname()
		{
			cout<<"City Name: "<<name<<"  And Charecter Length= "<<len<<endl;
		}
};
int main()
{
	city *cpt[10];
	int n=1,ch,i;
	do
	{
		cpt[n]=new city;
		cpt[n]->getname();
		n++;
		cout<<"If you want to take more city name then then press 1 else press 0.\n";
		cin>>ch;
	}while(ch);
	
	for(i=1;i<=n;i++)
	{
		cpt[i]->printname();
	}
	return 0;
}

