#include<iostream>
using namespace std;

class Vehicle
{
	private:
		string owner;
		string vehicleType;
		int regNumber;
		static int nextRegNumber;
	public:	
		Vehicle(string,string);
		
		void display();
		
		void display(bool);
};

Vehicle::Vehicle(string owner,string vehicleType)
{
	this->owner=owner;
	this->vehicleType=vehicleType;
	this->regNumber=nextRegNumber++;
}
		
void Vehicle::display()//shows Basic Info
{
	cout<<"Owner: "<<this->owner<<endl;
	cout<<"Vehicle Type: "<<this->vehicleType<<endl;
	cout<<"------------------------------------"<<endl;
}
		
void Vehicle::display(bool fullDetails)//shows Full Info
{
	if(fullDetails)
	{
		cout<<"Owner: "<<this->owner<<endl;
		cout<<"Vehicle Type: "<<this->vehicleType<<endl;
		cout<<"Registration Number: "<<this->regNumber<<endl;
		cout<<"------------------------------------"<<endl;
	}
	else
	{
		this->display();
	}
}

int Vehicle::nextRegNumber=1001;//starting registration number


int main()
{
	Vehicle v1("Partha Protim Das Barman","Car");
	Vehicle v2("Kohil Sarkar","Bike");
	Vehicle v3("Aditya Sah","Electric-Vehicle(EV)");
	
	cout<<"***Basic Info of Vehicles***"<<endl;
	cout<<"Vehicle-1: "<<endl;
	v1.display();
	cout<<"Vehicle-2: "<<endl;
	v2.display();
	cout<<"Vehicle-3: "<<endl;
	v3.display();
	
	
	cout<<"***Full Info of Vehicles***"<<endl;
	cout<<"Vehicle-1: "<<endl;
	v1.display(true);
	cout<<"Vehicle-2: "<<endl;
	v2.display(true);
	cout<<"Vehicle-3: "<<endl;
	v3.display(true);
	return 0;
}

/*
OUTPUT:
***Basic Info of Vehicles***
Vehicle-1:
Owner: Partha Protim Das Barman
Vehicle Type: Car
------------------------------------
Vehicle-2:
Owner: Kohil Sarkar
Vehicle Type: Bike
------------------------------------
Vehicle-3:
Owner: Aditya Sah
Vehicle Type: Electric-Vehicle(EV)
------------------------------------
***Full Info of Vehicles***
Vehicle-1:
Owner: Partha Protim Das Barman
Vehicle Type: Car
Registration Number: 1001
------------------------------------
Vehicle-2:
Owner: Kohil Sarkar
Vehicle Type: Bike
Registration Number: 1002
------------------------------------
Vehicle-3:
Owner: Aditya Sah
Vehicle Type: Electric-Vehicle(EV)
Registration Number: 1003
------------------------------------
*/
