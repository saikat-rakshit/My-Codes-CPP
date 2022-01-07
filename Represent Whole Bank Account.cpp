//Represent Bank Account
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<process.h>
using namespace std;

struct acc_inf
{
	char c_name[50];
	int acc_no;
	float balance;
	char acc_type[10];
};
class Bank
{
struct acc_inf x;
void input();
void withdraw(int,float);
void deposit(int,float);
void display(int);
};

void Bank::input()
{
cout<<"Enter the name of the customer: ";
gets(x.c_name);
cout<<"Enter account number: ";
cin>>x.acc_no;
cout<<"Enter opening balance: ";
cin>>x.balance;
cout<<"Enter cacount type(Saving/Current): ";
gets(x.acc_type);
}	
void Bank::withdraw(int ac,float money)
{
	if(x.acc_no==ac)
	{
      if(x.balance-1000>=money)
      x.balance-=money;
      else
      cout<<"Insufficient Balance.";
	}
	else
	cout<<"Account is not found.";
}
void Bank::deposit(int ac,float money)
{
	if(ac==x.acc_no)
	{
	    x.balance+=money;
	else
		cout<<"Account is not found.";
	}
}
void Bank::display(int ac)
{
	if(ac==x.acc_no)
	{
		cout<<"Your account number is: "<<x.acc_no;
		cout<<"Your name is: ";
		puts(x.c_name);
		cout<<"Your current balance is: "<<x.balance;
		cout<<"Your type of account is: "<<x.acc_type;
	}
}
};
int main()
{
	Bank obj;
	int ac;
	float money;
	int c;
	do
	{
		cout<<"Welcome to Banking System.";
		cout<<"\n__________________________";
		cout<<"\nPress 1 for Open New Account. \nPress 2 for Withdraw. \nPress 3 for Deposit. \nPress 4 for display about Customer Information\nPress 5 to Quit.\nEnter your choice->";
	    cin>>c;
	    switch(c)
	    {
	    	case 1:obj.input();
            break;
            case 2:cout<<"Enter account no: ";
                   cin>>ac;
                   cout<<"Enter amont to withdraw: ";
                   cin>>money;
                   obj.withdraw(ac,money);
            break;
            case 3:cout<<"Enter account no: ";
                   cin>>ac;
                   cout<<"Enter amont to deposit: ";
                   cin>>money;
            	   obj.deposit(ac,money);
        	break;
        	case 4:cout<<"Enter account no: ";
                   cin>>ac;
        	       obj.display(ac);
		    break;
		    case 5:exit(0);
		    break;
		    default:cout<<"Wrong Choice. Please try again.";
		}while(c!=5);
		return 0;
	}
}
