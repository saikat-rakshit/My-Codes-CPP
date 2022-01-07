//Virtual Base Class Concept
#include<iostream>
using namespace std;
class student
{
	protected:
		int roll;
	public:
		void getroll()
		{
			cout<<"Enter the roll number of a student: ";
			cin>>roll;
		}
		void putroll()
		{
			cout<<"\nThe roll nunmber of the student: "<<roll;
		}
};
class marks: virtual public student
{
	protected:
		float mark1,mark2;
	public:
		void getmarks()
		{
		    cout<<"\nEnter marks of two subject of the student: ";
		    cin>>mark1>>mark2;
		}
		void putmarks()
		{
			cout<<"\nThe marks of the student:"<<mark1<<" "<<mark2;
		}
 };
class game: virtual public student
 {
 	protected:
 	   float score;
 	public:
	 void getscore()
 	  {
 		  cout<<"\nEnter the game score of the student: ";
		   cin>>score;	
	  }
	  void putscore()
	  {
	  	cout<<"\nThe game score of the student: "<<score;
	  }
 };
class result: public marks, public game
{
	float total;
	public:
		void display()
		{
			total=mark1+mark2+score;
			putroll();
			putmarks();
			putscore();
			cout<<"\nThe total marks of the student: "<<total;
		}
};
int main()
{
	result ob;
	ob.getroll();
	ob.getmarks();
	ob.getscore();
	ob.display();
	return 0;
}
