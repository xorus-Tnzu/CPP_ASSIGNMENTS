#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int rollNo;
		int phyMarks;
		int chemMarks;
		int mathMarks;
		static int count;
	public:
		Student(string,int,int,int,int);
		
		int getTotal();
		
		double getAverage();
		
		string getGrade();	
				
		static int getCount();	
		
		void display();
};

int Student::count=0;

Student::Student(string name,int rollNo,int phyMarks,int chemMarks,int mathMarks)
{
	this->name=name;
	this->rollNo=rollNo;
	this->phyMarks=phyMarks;
	this->chemMarks=chemMarks;
	this->mathMarks=mathMarks;
	count++;	
}
int Student::getTotal()
{
	return (this->phyMarks+this->chemMarks+this->mathMarks);
}

double Student::getAverage()
{
	return this->getTotal()/3.0;
}

string Student::getGrade()
{
	double avg=this->getAverage();
	
	if(avg>=90) return "A+";
	else if(avg>=80) return "A";
	else if(avg>=70) return "B";	
	else if(avg>=60) return "C";
	else if(avg>=50) return "D";
	else return "F";
} 

int Student::getCount()
{
	return count;
}

void Student::display()
{
	cout<<"---Student Details---"<<endl;
	cout<<"Name: "<<this->name<<endl;
	cout<<"Roll Number: "<<this->rollNo<<endl;
	cout<<"Physics Marks: "<<this->phyMarks<<endl;
	cout<<"Chemisty Marks: "<<this->chemMarks<<endl;
	cout<<"Mathematics Marks: "<<this->mathMarks<<endl;
	cout<<"Total Marks: "<<this->getTotal()<<endl;
	cout<<"Grade: "<<this->getGrade()<<endl;
	cout<<"----------------------------------"<<endl;
}

int main()
{
	Student s1("Kohil Sarkar",101,98,99,97);
	Student s2("Partha Protim Das Barman",102,94,95,99);
	
	s1.display();
	s2.display();
	
	cout<<"Total Students: "<<Student::getCount()<<endl;
	return 0;
}

/*
OUTPUT:
---Student Details---
Name: Kohil Sarkar
Roll Number: 101
Physics Marks: 98
Chemisty Marks: 99
Mathematics Marks: 97
Total Marks: 294
Grade: A+
----------------------------------
---Student Details---
Name: Partha Protim Das Barman
Roll Number: 102
Physics Marks: 94
Chemisty Marks: 95
Mathematics Marks: 99
Total Marks: 288
Grade: A+
----------------------------------
Total Students: 2
*/
