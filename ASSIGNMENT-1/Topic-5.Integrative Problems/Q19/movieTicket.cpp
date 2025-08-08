#include<iostream>
using namespace std;

class Ticket
{
	private:
		string movieName;
		int ticketNo;
		string seatNo;
		double price;
		static int nextTicketNo;
	public:	
		Ticket(string movieName,string seatNo,double price)
		{
			this->movieName=movieName;
			this->ticketNo=nextTicketNo++;
			this->seatNo=seatNo;
			this->price=price;
		}
		
		void printTicket()
		{
			cout<<"***INOX***"<<endl;
			cout<<"Movie Name: "<<this->movieName<<endl;
			cout<<"Ticket Number: "<<this->ticketNo<<endl;
			cout<<"---------------------------------"<<endl;
		}
		
		void printTicket(bool fullDetails)
		{
			if(fullDetails)
			{
				cout<<"---Ticket Details---"<<endl;
				cout<<"***INOX***"<<endl;
				cout<<"Movie Name: "<<this->movieName<<endl;
				cout<<"Ticket Number: "<<this->ticketNo<<endl;
				cout<<"Seat Number: "<<this->seatNo<<endl;
				cout<<"Price: "<<this->price<<endl;
				cout<<"---------------------------------"<<endl;
			}
			else
			{
				this->printTicket();
			}
		}
};

int Ticket::nextTicketNo=1001;//initial Ticket number

int main()
{
	Ticket t1("The Shawshank Redemption","A7",320);
	Ticket t2("Schindler's List","B10",350);
	Ticket t3("Interstellar","E5",450);
	
	cout<<"***Ticket Summery***"<<endl;
	cout<<"Ticket-1:"<<endl;
	t1.printTicket();
	cout<<"Ticket-2:"<<endl;
	t2.printTicket();
	cout<<"Ticket-3:"<<endl;
	t3.printTicket();
	
	cout<<"***Ticket Full Details***"<<endl;
	cout<<"Ticket-1:"<<endl;
	t1.printTicket(true);
	cout<<"Ticket-2:"<<endl;
	t2.printTicket(true);
	cout<<"Ticket-3:"<<endl;
	t3.printTicket(true);
	return 0;
}

/*
OUTPUT:
***Ticket Summery***
Ticket-1:
***INOX***
Movie Name: The Shawshank Redemption
Ticket Number: 1001
---------------------------------
Ticket-2:
***INOX***
Movie Name: Schindler's List
Ticket Number: 1002
---------------------------------
Ticket-3:
***INOX***
Movie Name: Interstellar
Ticket Number: 1003
---------------------------------
***Ticket Full Details***
Ticket-1:
---Ticket Details---
***INOX***
Movie Name: The Shawshank Redemption
Ticket Number: 1001
Seat Number: A7
Price: 320
---------------------------------
Ticket-2:
---Ticket Details---
***INOX***
Movie Name: Schindler's List
Ticket Number: 1002
Seat Number: B10
Price: 350
---------------------------------
Ticket-3:
---Ticket Details---
***INOX***
Movie Name: Interstellar
Ticket Number: 1003
Seat Number: E5
Price: 450
---------------------------------
*/
