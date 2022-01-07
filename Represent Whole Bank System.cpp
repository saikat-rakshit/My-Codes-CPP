//Represent Bank Account
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<process.h>
using namespace std;

class Bank
{
	char c_name[50];
	int acc_no;
	float balance;
	char acc_type[10];
public:
void input()
{
cout<<"Enter the name of the customer: ";
gets(c_name);
cout<<"Enter account number: ";
cin>>acc_no;
cout<<"Enter opening balance: ";
cin>>balance;
cout<<"Enter cacount type(Saving/Current): ";
gets(acc_type);
}	
void withdraw(int ac,float money)
{
	if(acc_no==ac)
	{
      if(balance-1000>=money)
      balance-=money;
      else
      cout<<"Insufficient Balance.";
	}
	else
	cout<<"Account is not found.";
}
void deposit(int ac,float money)
{
	if(ac==acc_no)
	{
		balance+=money;
		else
		cout<<"Account is not found.";
	}
}
void display(int ac)
{
	if(ac==acc_no)
	{
		cout<<"Your account number is: "<<acc_no;
		cout<<"Your name is: ";
		puts(c_name);
		cout<<"Your current balance is: "<<balance;
		cout<<"Your type of account is: "<<acc_type;
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
