#include<iostream>
using namespace std;

class Product
{
	private:
		int productID;	
		string name;
		double price;
		int quantity;
		static int totalNoOfProducts;//static memeber
	public:
		Product(int,string,double,int);
		
		void update(double);	
		
		void update(double,int);
		
		double totalValue();
		
		void display();
		
		static int getCount();
};

int Product::totalNoOfProducts=0;

Product::Product(int productID,string name,double price,int quantity)
{
	this->productID=productID;
	this->name=name;
	this->price=price;
	this->quantity=quantity;
	totalNoOfProducts++;
}

void Product::update(double newPrice)//update price only 
{
	this->price=newPrice;
}

void Product::update(double newPrice,int newQty)//update both price and quantity
{
	this->price=newPrice;
    this->quantity=newQty;
}

double Product::totalValue()
{
	return this->price*this->quantity;
}

void Product::display()
{
	cout<<"---Product Info---"<<endl;
	cout<<"Product ID: "<<this->productID<<endl;
	cout<<"Name: "<<this->name<<endl;
	cout<<"Price: "<<this->price<<endl;
	cout<<"Quantity: "<<this->quantity<<endl;
	cout<<"Total Stock Value: "<<this->totalValue()<<endl;
	cout<<"----------------------------------"<<endl;
}

int Product::getCount()
{
	return totalNoOfProducts;
}
int main()
{
	Product p1(1001,"Laptop",45000,10);
	Product p2(1004,"External Hard Disk Drive(HDD)",5000,12);
	
	p1.update(46000);
	p2.update(5050,13);
	
	p1.display();
	
	p2.display();
	
	cout<<"\nTotal Products Added: "<<Product::getCount()<<endl;
	return 0;
}

/*
OUTPUT:
---Product Info---
Product ID: 1001
Name: Laptop
Price: 46000
Quantity: 10
Total Stock Value: 460000
----------------------------------
---Product Info---
Product ID: 1004
Name: External Hard Disk Drive(HDD)
Price: 5050
Quantity: 13
Total Stock Value: 65650
----------------------------------

Total Products Added: 2
*/
