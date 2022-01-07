//Represent Bank Account
#include<iostream>
//#include<stdio.h>
//#include<conio.h>
//#include<process.h>
using namespace std;

class Bank
{
	//Declaration of Data Members
	public:
		char name[20];
		char account_type[20];
		long long int account_number;
		int balance;
		
	//member functions of the class Bank
	//initialize function to initialize data members
	void initialize()
	{
		cout<<"Enter Account Holder's Name: ";
		gets(name);
		cout<<"\nEnter Account Type: ";
		gets(account_type);
		cout<<"\nEnter Account Number: ";
		cin>>account_number;
		cout<<"\nBalance Amont: ";
		cin>>balance;
	}
	//deposit() function to deposite amount in account
	void deposit()
	{
		int bal;
		cout<<"\nEnter the amount to deposit: ";
		cin>>bal;
		balance+=bal;
		cout<<"Amount depositeed successfuly.\nYour new balance: "<<balance;
	}
	//check() function to withdraw amount and check remaining balance
	void check()
	{
		int bal;
		cout<<"\nYour balance: "<<balance<<"\nEnter amount to withdraw: ";
		cin>>bal;
		if(bal<=balance)
	    {
	    balance-=bal;
	    cout<<"Amount Withdraw successful.";
		cout<<"\nRemaining balance: "<<balance; 
		}
		else
		{
		cout<<"You have not sufficient balance to withdraw.";	
		}
	}
	//display() function to display user information 
	void display()
	{
	    cout<<"\nName: ";
		puts(name);
		cout<<"Balance: "<<balance; 	
	}
};
int main()
{
int i;
//clrscr();
/*An array objects of Bank class can be created to handle 10 customers and their data as Bank bk[10];
Then run this array in loop to initialize and access it's data members.*/

Bank bk;
bk.initialize();
cout<<"\n1.Your Informatin. \n2.Deposit. \n3.Withdraw. \nEnter your choice->";
cin>>i;
if(i=1)
{
	bk.display();
}
else if(i=2)
{
	bk.deposit();
}
else if(i=3);
{
	bk.check();
}
return 0;
}
