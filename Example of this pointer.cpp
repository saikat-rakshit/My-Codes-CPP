//Example of this pointer
#include<iostream>
#include<string.h>
using namespace std;
class X
{
	char name[20];
	int age;
	public:
		X(char *s,int a)
		{
			strcpy(name,s);
			age=a;
		}
		X & greater(X & ob)
		{
			if(ob.age>=age)
				return ob;
			else
			    return *this;
		}
		void display()
		{
			cout<<"The elder person's name: "<<name<<" "<<"and Age:"<<age<<endl;
		}
};
int main()
{
	X ob1("Sonu",19),ob2("Monu",17),ob3("Baba",50),ob4("Maa",40);
	X obj=ob1.greater(ob3);     //Between Baba and Sonu (ob1 is calling greater function and ob3 is the argument then ob holds the reference of ob3)
	obj.display();
	
	obj=ob1.greater(ob4);       //Between Maa and Sonu
	obj.display();
	
	obj=ob1.greater(ob2);       //Between Monu and Sonu
    obj.display();
    
    return 0;
}
