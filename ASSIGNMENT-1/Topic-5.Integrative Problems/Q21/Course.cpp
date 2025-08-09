#include<iostream>
using namespace std;

class Course
{
	private:
		string courseID;
		string courseName;
		double fees;
		int enrolledStudents;
	
		static int totalEnrollments;
			
	public:
		Course(string,string,double);
		
		void enroll(string);
		
		void enroll(string,string);
		
		void courseInfo();
		
		static void getTotalEnrollments();
};

Course::Course(string courseID,string courseName,double fees)
{
	this->courseID=courseID;
	this->courseName=courseName;
	this->fees=fees;
	enrolledStudents=0;
}
		
void Course::enroll(string name)
{
	this->enrolledStudents++;
	totalEnrollments++;
	cout<<name<<" has enrolled in "<<this->courseName<<"."<<endl;
}
		
void Course::enroll(string name,string email)
{
	this->enrolledStudents++;
	totalEnrollments++;
	cout<<name<<"[Email: "<<email<<" ]"<<" has enrolled in "<<this->courseName<<"."<<endl;
}
		
void Course::courseInfo()
{
	cout<<"Course ID: "<<this->courseID<<endl;
	cout<<"Course Name: "<<this->courseName<<endl;
	cout<<"Fees: "<<this->fees<<endl;
	cout<<"Number of Enrolled Students: "<<this->enrolledStudents<<endl;
	cout<<"-------------------------------------------"<<endl;
}
		
void Course::getTotalEnrollments()
{
	cout<<"Total Enrollments in all courses: "<<totalEnrollments<<endl;
}

int Course::totalEnrollments=0;

int main()
{
	Course c1("C101","C++ Programming",5000);
	Course c2("C102","Java Programming",4000);
	
	c1.enroll("Kohil Sarkar");
	c1.enroll("Aditya Sah","Aditya.sah@gmail.com");
	c2.enroll("Partha Protim Das Barman");
	
	cout<<"\n===Course Details==="<<endl;
	c1.courseInfo();
	c2.courseInfo();
	
	cout<<"\n===Total Enrollments==="<<endl;
	Course::getTotalEnrollments();
	
	return 0;
}

/*
OUTPUT:
Kohil Sarkar has enrolled in C++ Programming.
Aditya Sah[Email: Aditya.sah@gmail.com ] has enrolled in C++ Programming.
Partha Protim Das Barman has enrolled in Java Programming.

===Course Details===
Course ID: C101
Course Name: C++ Programming
Fees: 5000
Number of Enrolled Students: 2
-------------------------------------------
Course ID: C102
Course Name: Java Programming
Fees: 4000
Number of Enrolled Students: 1
-------------------------------------------

===Total Enrollments===
Total Enrollments in all courses: 3

--------------------------------
Process exited after 0.1211 seconds with return value 0
Press any key to continue . . .
*/
