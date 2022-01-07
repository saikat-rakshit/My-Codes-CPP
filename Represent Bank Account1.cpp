//Represent Bank Account
#include<iostream>
using namespace std;

class Bank
{
//Declaration of Data Members
		char name[20];
		char account_type[7];
		long long int account_number;
		int mb;
		
//member functions of the class Bank
//initialize function to initialize data members
	public:
	void initialize()
	{
		cout<<"\nEnter Account Holder's Name: ";
		gets(name);
		cout<<"\nEnter Account Type(Savings/Current):";
		gets(account_type);
		cout<<"\nEnter Account Number: ";
		cin>>account_number;
		cout<<"\nInitial Balance Amount: ";
		cin>>mb;
	}
//deposit() function to deposite amount in account
	void deposit()
	{
		int bal;
		char naam[25];
		cout<<"\nEnter the name of the depositer: ";
	    cin>>naam;
		cout<<"Enter the amount to deposit: ";
		cin>>bal;
	    mb=mb+bal;
		cout<<"Amount deposited successfuly.\nYour new balance: "<<mb<<endl;
	}
//withdraw() function to withdraw amount and check remaining balance
	void withdraw()
	{ 
        int rem;
		int bal1;
		cout<<"\nYour balance: "<<mb;
	    cout<<"\nEnter amount to withdraw: ";
	    cin>>bal1;
        if(bal1>mb)
         {
           cout<<"You have not sufficient balance to withdraw.";	
         }	
        else
         {
           rem=mb-bal1;
	       cout<<"Amount Withdraw successful.";
	       cout<<"\nReamining Balance: "<<rem;	
	     }
	}
//details() function to display user information 
	void details()
	{
	    cout<<"\nYour name: ";
		puts(name);
		cout<<"Your account type is:";
		puts(account_type);
		cout<<"Your account number is: "<<account_number;
		cout<<"\nCurrent balance amount on your account: "<<mb<<endl;
	}
};
int main()
{
cout<<"**Welcome to the Bank**"<<"\nPlease Enter Your Details."<<endl;
int i; 
Bank bk;
bk.initialize();
do
{
cout<<"\nPress 1 for Check Your Details. \nPress 2 for Deposit. \nPress 3 for Withdraw. \nPress 4 for Quit. \nEnter your choice->";
cin>>i;
switch(i)
{
case 1: bk.details();
break;
case 2:bk.deposit();
break;
case 3: bk.withdraw();
break;
case 4: exit(0);
break;
default: cout<<"\nWrong Choice. Please try again."<<endl;
}
}while(i!=3);
return 0;
}
