#include<iostream>
using namespace std;

class Company
{
	private:
		static int employeeCount;
	public:
		static void addEmployee();
		
		static int getEmployeeCount(); 
};

int Company::employeeCount=0;

void Company::addEmployee()
{
	employeeCount++;
	cout<<"Employee Added. Total Number Of Employees: "<<employeeCount<<endl;	
}	
		
int Company::getEmployeeCount()
{
	return employeeCount;	
}

int main()
{
	Company::addEmployee();
	Company::addEmployee();
	
	cout<<"Final Employee Count: "<<Company::getEmployeeCount()<<endl;
	return 0;
}

/*
OUTPUT:
Employee Added. Total Number Of Employees: 1
Employee Added. Total Number Of Employees: 2
Final Employee Count: 2
*/
