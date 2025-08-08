#include<iostream>
using namespace std;

class Employee
{
	private:
		int id;
		string name;
		double salary;
	public:	
		void getData();
			
		void putData();
};

void Employee::getData()
{
	cout<<"Enter Employee ID: ";
	cin>>this->id;
	cout<<"Enter Employee Name: ";
	getline(cin>>ws,this->name);
	cout<<"Enter Employee Salary: ";
	cin>>this->salary;
	cout<<"-------------------------------------"<<endl;
}

void Employee::putData()
{
	cout<<"Employee ID: "<<this->id<<endl;
	cout<<"Employee Name: "<<this->name<<endl;
	cout<<"Employee Salary: "<<this->salary<<endl;	
	cout<<"-------------------------------------"<<endl;
}

int main()
{
	int n;
	cout<<"Enter Number of employees: ";
	cin>>n;
	
	Employee emp[n];//Creating Array of employee(Dynamically)
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter details of Employee-"<<i+1<<":-"<<endl;
		emp[i].getData();
	}
	
	cout<<"===All Employee Details==="<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"---Details of Employee-"<<i+1<<"---"<<endl;
		emp[i].putData();
	}
	return 0;
}

/*
OUTPUT:
Enter Number of employees: 5
Enter details of Employee-1:-
Enter Employee ID: 101
Enter Employee Name: Alice Sarkar
Enter Employee Salary: 25000
-------------------------------------
Enter details of Employee-2:-
Enter Employee ID: 102
Enter Employee Name: Bob Talukdar
Enter Employee Salary: 20000
-------------------------------------
Enter details of Employee-3:-
Enter Employee ID: 103
Enter Employee Name: John Khapra
Enter Employee Salary: 30000
-------------------------------------
Enter details of Employee-4:-
Enter Employee ID: 104
Enter Employee Name: Tom Kapoor
Enter Employee Salary: 31000
-------------------------------------
Enter details of Employee-5:-
Enter Employee ID: 105
Enter Employee Name: Karl Barman
Enter Employee Salary: 35000
-------------------------------------
===All Employee Details===
---Details of Employee-1---
Employee ID: 101
Employee Name: Alice Sarkar
Employee Salary: 25000
-------------------------------------
---Details of Employee-2---
Employee ID: 102
Employee Name: Bob Talukdar
Employee Salary: 20000
-------------------------------------
---Details of Employee-3---
Employee ID: 103
Employee Name: John Khapra
Employee Salary: 30000
-------------------------------------
---Details of Employee-4---
Employee ID: 104
Employee Name: Tom Kapoor
Employee Salary: 31000
-------------------------------------
---Details of Employee-5---
Employee ID: 105
Employee Name: Karl Barman
Employee Salary: 35000
-------------------------------------
*/
