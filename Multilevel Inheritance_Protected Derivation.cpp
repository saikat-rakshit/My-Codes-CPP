//Multilevel Inheritance_Protected Derivation
#include<iostream>
using namespace std;
class Student
{
	protected:
      	int roll;
    public:
	    void getroll()
		{
			cout<<"Enter Roll Number:";
			cin>>roll;
		}	
		void putroll()
		{
		     cout<<"\nThe Roll No of a Student:"<<roll<<endl;	
	    }
};
class Marks:public Student
{
	protected:
		float beng,eng;
	public:
	    void getmarks()
		{
	      cout<<"Put the Marks of Bengali & English of the student is:";
	      cin>>beng>>eng;
		}
		void putmarks()
		{
		cout<<"\nThe Mark of Bengali of the sudent:"<<beng;
		cout<<"\nThe Mark of English of the student:"<<eng;
		}	
};
class Result:public Marks
{
	float total;
	public:
		void display()
		{
			total=beng+eng;
			putroll();
			putmarks();
			cout<<"\nThe total marks of the student: "<<total<<endl;
		}
};
int main()
{
	Result ob;
	ob.getroll();
	ob.getmarks();
	ob.display();
}

