#include<iostream>
using namespace std;

class Complex
{
	private: 
		double real;
		double img;
	public:
		Complex();
		
		Complex(double,double);
		
		void display();		
};

Complex::Complex()//Default Constructor
{
	this->real=0.0;
	this->img=0.0;
}

Complex::Complex(double real,double img)//Parameterized Constructor
{
	this->real=real;
	this->img=img;
}

void Complex::display()
{
	cout<<this->real<<"+"<<this->img<<"i"<<endl;
}

int main()
{
	Complex c1;//Creating Object using Default Constructor
	cout<<"Complex Number using default constructor: ";
	c1.display();
	
	Complex c2(4,5);//Creating Object using Parameterized Constructor
	cout<<"Complex Number using parameterized constructor: ";
	c2.display();
	
	return 0;
}

/*
OUTPUT:
Complex Number using default constructor: 0+0i
Complex Number using parameterized constructor: 4+5i
*/
