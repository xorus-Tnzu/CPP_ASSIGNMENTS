#include<iostream>
using namespace std;

class BankAccount
{
	private:
		int accountNumber;
		string name;
		double balance;
		static double interestRate;
	public:
		BankAccount(int,string,double);
		void display();
		void deposit(double);
		void withdraw(double);
		static void setInterestRate(double);//static member
};

double BankAccount::interestRate=0.0;

BankAccount::BankAccount(int accountNumber,string name,double balance)
{
	this->accountNumber=accountNumber;
	this->name=name;
	this->balance=balance;
}

void BankAccount::display()
{
	cout<<"---Account Info---"<<endl;
	cout<<"Account number: "<<this->accountNumber<<endl;
	cout<<"Name: "<<this->name<<endl;
	cout<<"Current Balance: "<<this->balance<<endl;
	cout<<"Interest Rate: "<<this->interestRate<<"%"<<endl;
	cout<<"------------------------------------"<<endl;
}

void BankAccount::deposit(double amt)
{
	if(amt>0)
	{
		this->balance+=amt;
		cout<<amt<<"Rupees deposited successfully..."<<endl;
	}
	else
	{
		cout<<"Invalid Amount!Please Try Again..."<<endl;	
	}	
}

void BankAccount::withdraw(double amt)
{
	if(amt>0 && amt<=balance)
	{
		this->balance-=amt;
		cout<<amt<<"Rupees withrawn successfully..."<<endl;
	}
	else
	{
		cout<<"Invalid Amount!Please Try Again..."<<endl;	
	}	
}

void BankAccount::setInterestRate(double rate)//static method
{
	interestRate=rate;
}

int main()
{
	BankAccount::setInterestRate(4.5);
	
	BankAccount acc1(1001,"Kohil Sarkar",50000);
	acc1.deposit(1000);
	acc1.withdraw(5000); 
	acc1.display();
	
	BankAccount::setInterestRate(2.5);
	
	BankAccount acc2(1002,"Partha Protim Das Barman",60000);
	acc2.deposit(2000);
	acc2.withdraw(4000); 
	acc2.display();
	return 0;
}
/*
OUTPUT:
1000Rupees deposited successfully...
5000Rupees withrawn successfully...
---Account Info---
Account number: 1001
Name: Kohil Sarkar
Current Balance: 46000
Interest Rate: 4.5%
------------------------------------
2000Rupees deposited successfully...
4000Rupees withrawn successfully...
---Account Info---
Account number: 1002
Name: Partha Protim Das Barman
Current Balance: 58000
Interest Rate: 2.5%
------------------------------------
*/
