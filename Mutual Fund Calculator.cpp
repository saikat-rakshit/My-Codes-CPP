//SIP Calculator
#include<iostream>
#include<math.h>
using namespace std;
class MF
{
	float ia,eg,total,er,fmv;                 // ia=invested amount, eg=estimated growth, y=year, er=expected rate of return, fmv=future maturity value, m=months
	int y,m;
	
	public:
		void data_SIP()
		  {
		    cout<<"\nEnter Your Monthly SIP Amount-> ";
		    cin>>ia;
		    cout<<"Enter Your Expected Gain(% Per Year)-> ";
		    cin>>eg;
		    cout<<"Enter SIP Tenure(Years)-> ";
		    cin>>y;
		    m=12*y;         //months=12*years (1 year=12 months)
		    total=ia*m;     //invested amount*months
		    cout<<"Your total Investment Amount-> "<<total<<endl;
		    er=eg/100/12;   //estimated growth/100/12 (12 months)
		    fmv= ia*(pow((1+er),(m-1)))*(1+er)/er;  //wrong
		    cout<<"Your Estimated Growth at Maturity-> "<<fmv<<endl;
		    cout<<"Your growth= "<<fmv-ia<<endl;
		  }
		  void data_OTI()
		  {
		  	cout<<"\nEnter Your One Time Investment Amount-> ";
		    cin>>ia;
		    cout<<"Enter Your Expected Gain(% Per Year)-> ";
		    cin>>eg;
		    cout<<"Enter SIP Tenure(Years)-> ";
		    cin>>y;
		    cout<<"Your total Investment Amount-> "<<ia<<endl;
		    fmv= ia*(pow((1+(eg/100)),(1*y)));         //Compound interest= Principle*(1+(return rate/100)^time)
		    cout<<"Your Estimated Growth at Maturity-> "<<fmv<<endl;
		    cout<<"Your growth= "<<fmv-ia<<endl;
		  } 
};
int main()
{
	int ch;
	MF ob;
	cout<<"**Welcome to The Mutual Fund Calculator**"<<endl;
	cout<<"\nIn which catagory do you invest in?"<<"  "<<"\n1.Monthly SIP  or  2.One Time Investment."<<endl;
	cout<<"Press 1 and Enter for Monthly SIP. \nPress 2 and Enter for select One Time Investment. \nPress 3 and Enter for Quit."<<" "<<"\nEnter your choice->";
	cin>>ch;
	switch(ch)
     {
       case 1: ob.data_SIP();
       break;
       case 2: ob.data_OTI();
       break;
       case 3: exit(0);
       break;
       default: cout<<"\nWrong Choice. Please try again."<<endl;
      }
    do
    {
    int ch2;
    cout<<"\nIf You Want To Continue Then Press 5 and Enter Either Press any key and Enter To Quit."<<" "<<"\nEnter your choice->";
    cin>>ch2;
    if(ch2==5)
    {
    cout<<"\nIn which catagory do you invest in?"<<"  "<<"\n1.Monthly SIP  or  2.One Time Investment."<<endl;
	cout<<"Press 1 and Enter for Monthly SIP. \nPress 2 and Enter for select One Time Investment. \nPress 3 and Enter for Quit."<<" "<<"\nEnter your choice->";
	cin>>ch;
	switch(ch)
     {
       case 1: ob.data_SIP();
       break;
       case 2: ob.data_OTI();
       break;
       case 3: exit(0);
       break;
       default: cout<<"\nWrong Choice. Please try again."<<endl;
     }
    }
    }while(ch==5);
    return 0; 
}
