#include<iostream>
using namespace std;

class Book
{
	private:
		string title;
		string author;
		double price;
	public:
		void getData();
		
		void putData();		
};

void Book::getData()
{
	cout<<"Enter book title: ";
	getline(cin>>ws,this->title);
	cout<<"Enter author name: ";
	getline(cin>>ws,this->author);
	cout<<"Enter price of the book: ";
	cin>>this->price;
	cout<<"------------------------------------"<<endl;		
}

void Book::putData()
{
	cout<<"Book Title: "<<this->title<<endl;
	cout<<"Autor Name: "<<this->author<<endl;
	cout<<"Price: "<<this->price<<endl;
	cout<<"------------------------------------"<<endl;
}

int main()
{
	Book b1;
	cout<<"Enter details of book-1: "<<endl;
	b1.getData();
	
	Book b2;
	cout<<"Enter details of book-2: "<<endl;
	b2.getData();
	
	cout<<"***Book Details***"<<endl;
	cout<<"Details of Book-1: "<<endl;
	b1.putData();
	cout<<"Details of Book-2: "<<endl;
	b2.putData();
	return 0;
}

/*OUTPUT:
Enter details of book-1:
Enter book title: Wings Of Fire
Enter author name: Dr.APJ Abdul Kalam
Enter price of the book: 249.99
------------------------------------
Enter details of book-2:
Enter book title: Rich Dad Poor Dad
Enter author name: Robert Toru Kiyosaki
Enter price of the book: 201
------------------------------------
***Book Details***
Details of Book-1:
Book Title: Wings Of Fire
Autor Name: Dr.APJ Abdul Kalam
Price: 249.99
------------------------------------
Details of Book-2:
Book Title: Rich Dad Poor Dad
Autor Name: Robert Toru Kiyosaki
Price: 201
------------------------------------
*/
