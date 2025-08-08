#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int rollNo;
		int totalMarks;
	public:
		Student(string,int,int);
		Student(Student&);
		void showDetails();
};

Student::Student(string name,int rollNo,int totalMarks)
{
	this->name=name;
	this->rollNo=rollNo;
	this->totalMarks=totalMarks;
}
Student::Student(Student& s)
{
	this->name=s.name;
	this->rollNo=s.rollNo;
	this->totalMarks=s.totalMarks;
}
void Student::showDetails()
{
	cout<<"Name: "<<this->name<<"\nRoll Number: "<<this->rollNo<<"\nTotal Marks: "<<this->totalMarks<<endl;
}

int main()
{
	string name;
	int rollNo,totalMarks;
	
	cout<<"Enter Details of Student-1:"<<endl;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter RollNumber: ";
	cin>>rollNo;
	cout<<"Enter TotalMarks: ";
	cin>>totalMarks;
	
	Student s1(name,rollNo,totalMarks);
	
	cout<<"--------------------------"<<endl;
	
	cout<<"Details of Student-1: "<<endl;
	s1.showDetails();

	cout<<"--------------------------"<<endl;
		
	Student s2(s1);//use of Copy Constructor
	
	cout<<"Details of Student-2: "<<endl;
	s2.showDetails();
	
	return 0;
}
