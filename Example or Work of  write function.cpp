//Example or Work of  write function 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *s1="C++ ";
	char *s2="Programming";
	int l1=strlen(s1);
	int l2=strlen(s2);
	for(int i=1;i<l2;i++)
	{
		cout.write(s2,i);
		cout<<endl;
	}
	for(int i=l2;i>0;i--)
	{
		cout.write(s2,i);
		cout<<endl;
	}
	cout.write(s1,l1).write(s2,l2);
	cout<<endl;
	cout.write(s1,20);
	return 0;
}
