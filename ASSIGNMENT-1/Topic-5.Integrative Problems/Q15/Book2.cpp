#include<iostream>
using namespace std;

class Book
{
	private:
		string title;
		string author;
		long int ISBN;
		bool availability;
		static int totalBooksIssued;
	public:
		Book(string,string,long int,bool);
		
		void display();
		
		void issueBook(long int);
		
		void issueBook(string); 	
		
		static int getCount();	
};

int Book::totalBooksIssued=0;

Book::Book(string title,string author,long int ISBN,bool availability)
{
	this->title=title;
	this->author=author;
	this->ISBN=ISBN;
	this->availability=availability;
}

void Book::issueBook(long int isbn)
{
	if(isbn==this->ISBN && this->availability)
	{
		this->availability=false;
		totalBooksIssued++;
		cout<<"Book '"<<this->title<<"' is issued by ISBN."<<endl;
	}
	else if(!availability)
	{
		cout<<"Book '"<<this->title<<"' is alreday issued."<<endl;
	}
	else
	{
		cout<<"ISBN is not matched."<<endl;
	}
}
		
void Book::issueBook(string t)
{
	if(t==this->title && this->availability)
	{
		this->availability=false;
		totalBooksIssued++;
		cout<<"Book '"<<this->title<<"' is issued by ISBN."<<endl;	
	}	
	else if(!availability)
	{
		cout<<"Book '"<<this->title<<"' is alreday issued."<<endl;
	}
	else
	{
		cout<<"Title is not matched."<<endl;
	}
} 

void Book::display()
{
	cout<<"---Book Info---"<<endl;
	cout<<"Book Title: "<<this->title<<endl;
	cout<<"Autor Name: "<<this->author<<endl;
	cout<<"ISBN: "<<this->ISBN<<endl;
	cout<<"Availability: "<<((this->availability)?"Yes":"No")<<endl;
	cout<<"------------------------------------"<<endl;
}

int Book::getCount()
{
	return totalBooksIssued;
}
		
int main()
{
	Book b1("Wings Of Fire","Dr.APJ Abdul Kalam",1234560085,true);
	Book b2("OOPS With C++","E Balagurusamy",1652378343,true);
	
	b1.issueBook("Wings Of Fire");
	b1.issueBook(1234560085);
	
	b2.issueBook(1652378343);
	
	cout<<"***Book Details***"<<endl;
	b1.display();
	b2.display();
	
	cout<<"Total Books Issued: "<<Book::getCount()<<endl;
	return 0;
}

/*OUTPUT:
Book 'Wings Of Fire' is issued by ISBN.
Book 'Wings Of Fire' is alreday issued.
Book 'OOPS With C++' is issued by ISBN.
***Book Details***
---Book Info---
Book Title: Wings Of Fire
Autor Name: Dr.APJ Abdul Kalam
ISBN: 1234560085
Availability: No
------------------------------------
---Book Info---
Book Title: OOPS With C++
Autor Name: E Balagurusamy
ISBN: 1652378343
Availability: No
------------------------------------
Total Books Issued: 2
*/
