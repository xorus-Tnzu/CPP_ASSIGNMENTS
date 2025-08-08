#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int rollNo;
		static int studentsCount;
	public:
		Student(string,int);
		void display();
		static int getStudentsCount();
};

int Student::studentsCount=0;

Student::Student(string name,int rollNo)
{
	this->name=name;
	this->rollNo=rollNo;
	studentsCount++;
}		
		
void Student::display()
{
	cout<<"---Student Details---"<<endl;
	cout<<"Name: "<<this->name<<endl;
	cout<<"Roll Number: "<<this->rollNo<<endl;
	cout<<"-------------------------------"<<endl;
}
		
int Student::getStudentsCount()
{
	return studentsCount;
}
				
int main()
{
	Student s1("kohil Sarkar",101);
	Student s2("Partha Protim Das Barman",102);
	
	s1.display();
	s2.display();
	
	cout<<"Total Number Of Students: "<<Student::getStudentsCount()<<endl;
	return 0;
}

/*
OUTPUT:
---Student Details---
Name: kohil Sarkar
Roll Number: 101
-------------------------------
---Student Details---
Name: Partha Protim Das Barman
Roll Number: 102
-------------------------------
Total Number Of Students: 2
*/
