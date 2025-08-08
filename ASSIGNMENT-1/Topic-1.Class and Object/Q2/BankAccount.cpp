#include<iostream>
using namespace std;

class BankAccount
{
	private:
		int accountNumber;
		string holderName;
		double balance;
	public:
		void getData();
		void putData();
		void deposit(double);
		void withdraw(double);
};

void BankAccount::getData()
{
	cout<<"Enter your account number: ";
	cin>>this->accountNumber;
	cout<<"Enter your name: ";
	getline(cin>>ws,this->holderName);
	cout<<"Enter initial amount to deposit: ";
	cin>>this->balance;
	cout<<"------------------------------------"<<endl;
}

void BankAccount::putData()
{
	cout<<"Account number: "<<this->accountNumber<<endl;
	cout<<"Name: "<<this->holderName<<endl;
	cout<<"Current Balance: "<<this->balance<<endl;
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

int main()
{
	BankAccount acc1;
	cout<<"***Creating BankAccount***"<<endl;
	acc1.getData();

	int choice,amt;
	
	do
	{
		cout<<"Menu:\n1.Deposit Amount\n2.Withdraw Amount\n3.Display Details\n4.Exit"<<endl;
		cout<<"Enter your choice(1-4): ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: cout<<"Enter Amount to deposit: ";
					cin>>amt;
					acc1.deposit(amt);
					break;
					
			case 2: cout<<"Enter Amount to withraw: ";
					cin>>amt;
					acc1.withdraw(amt);
					break;
					
			case 3: cout<<"***Your Account Details***"<<endl;
					acc1.putData();
					break;
					
			case 4: cout<<"ThankYou! Exiting....."<<endl;
					break;
					
			default:cout<<"Invalid Choice!Please Try Again..."<<endl;
					break;	
		}
	}while(choice!=4);
	
	return 0;
}

/*
OUTPUT:
***Creating BankAccount***
Enter your account number: 1001
Enter your name: Partha Protim Das Barman
Enter initial amount to deposit: 50000
------------------------------------
Menu:
1.Deposit Amount
2.Withdraw Amount
3.Display Details
4.Exit
Enter your choice(1-4): 1
Enter Amount to deposit: 15000
15000Rupees deposited successfully...
Menu:
1.Deposit Amount
2.Withdraw Amount
3.Display Details
4.Exit
Enter your choice(1-4): 2
Enter Amount to withraw: 5000
5000Rupees withrawn successfully...
Menu:
1.Deposit Amount
2.Withdraw Amount
3.Display Details
4.Exit
Enter your choice(1-4): 3
***Your Account Details***
Account number: 1001
Name: Partha Protim Das Barman
Current Balance: 60000
------------------------------------
Menu:
1.Deposit Amount
2.Withdraw Amount
3.Display Details
4.Exit
Enter your choice(1-4): 4
ThankYou! Exiting.....
*/
