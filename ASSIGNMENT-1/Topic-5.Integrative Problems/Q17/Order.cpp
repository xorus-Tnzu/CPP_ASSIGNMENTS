#include<iostream>
using namespace std;

class Order
{
	private:
		int orderID;
		string customerName;
		double amount;
		double shippingCost;
		static int noOfOrderPlaced;
	public:
		Order(int,string,double,double);
		
		double calculateTotal();
		
		double calculateTotal(bool);
		
		void display();
		
		static int getNoOfOrderPlaced();
};

int Order::noOfOrderPlaced=0;

Order::Order(int orderID,string customerName,double amount,double shippingCost)
{
	this->orderID=orderID;
	this->customerName=customerName;
	this->amount=amount;
	this->shippingCost=shippingCost;
	noOfOrderPlaced++;
}
		
//returns Only Amount		
double Order::calculateTotal()
{
	return this->amount;
}		
		
//returns Amount+ShippingCost		
double Order::calculateTotal(bool addShippingCost)
{
	if(addShippingCost)
	{
		return this->amount+this->shippingCost;
	}
	else
	{
		this->calculateTotal();
	}
}

void Order::display()
{
	cout<<"Order ID: "<<this->orderID<<endl;
	cout<<"Customer Name: "<<this->customerName<<endl;
	cout<<"Amount: "<<this->amount<<endl;
	cout<<"Shipping Cost: "<<this->shippingCost<<endl;
	cout<<"-----------------------------------"<<endl;
}

int Order::getNoOfOrderPlaced()
{
	return noOfOrderPlaced;
}

int main()
{
	Order o1(1001,"Shyam Sharma",500,100);
	Order o2(1002,"Aditya Kumar",1200,120);
	
	//Displaying Orders
	o1.display();
	cout<<"Total(Without ShippingCost): "<<o1.calculateTotal()<<endl;
	cout<<"Total(Including ShippingCost): "<<o1.calculateTotal(true)<<endl<<endl<<endl;
	
	
	o2.display();
	cout<<"Total(Without ShippingCost): "<<o2.calculateTotal()<<endl;
	cout<<"Total(Including ShippingCost): "<<o2.calculateTotal(true)<<endl<<endl<<endl;
	
	cout<<"Total Orders Placed: "<<Order::getNoOfOrderPlaced()<<endl;
	return 0;
}

/*
OUTPUT:
Order ID: 1001
Customer Name: Shyam Sharma
Amount: 500
Shipping Cost: 100
-----------------------------------
Total(Without ShippingCost): 500
Total(Including ShippingCost): 600


Order ID: 1002
Customer Name: Aditya Kumar
Amount: 1200
Shipping Cost: 120
-----------------------------------
Total(Without ShippingCost): 1200
Total(Including ShippingCost): 1320


Total Orders Placed: 2
*/
