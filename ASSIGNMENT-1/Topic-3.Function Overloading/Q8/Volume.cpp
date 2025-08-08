#include<iostream>
#include<cmath>
using namespace std;

typedef double heightOfCylinder;
typedef double heightOfCuboid;

class Volume
{
	public:
		double calculateVol(double);
		
		double calculateVol(double,double);
		
		double calculateVol(double,double,double);
};

double Volume::calculateVol(double side)
{
	return side*side*side;	
}
		
double Volume::calculateVol(double radius,double height)
{
	return 	M_PI*radius*radius*height;
}	
		
double Volume::calculateVol(double length,double breadth,double height)
{
	return length*breadth*height;
}

int main()
{
	Volume vol;
	
	double side=5;
	
	double radius=3; heightOfCylinder h1=6.6;
	
	double length=2,breadth=4.6; heightOfCuboid h2=7;
	
	cout<<"Volume of Cube: "<<vol.calculateVol(side)<<endl;
	cout<<"Volume of Cylinder: "<<vol.calculateVol(radius,h1)<<endl;
	cout<<"Volume of Cuboid: "<<vol.calculateVol(length,breadth,h2)<<endl;
	
	return 0;
}

/*
OUTPUT:
Volume of Cube: 125
Volume of Cylinder: 186.611
Volume of Cuboid: 64.4
*/
