#include<iostream>
using namespace std;

class Rectangle
{
	private:
		double length;
		double breadth;
	public:
		Rectangle();
		Rectangle(double,double);
		double area();
};

Rectangle::Rectangle()
{
	length=1.0;
	breadth=1.0;
}
Rectangle::Rectangle(double length,double breadth)
{
	this->length=length;
	this->breadth=breadth;
}
double Rectangle::area()
{
	return this->length*this->breadth;
}

int main()
{
	Rectangle r1;
	cout<<"Area of Rectangle-1 is: "<<r1.area()<<endl;
	
	double l,b;
	cout<<"Enter length: ";
	cin>>l;
	cout<<"Enter breadth: ";
	cin>>b;
	
	Rectangle r2(l,b);
	cout<<"Area of Rectangle-2: "<<r2.area();
	return 0;
}
