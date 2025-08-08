#include<iostream>
using namespace std;

class Calculator
{
	public:
		int add(int,int);
		float add(float,float);
		float add(int,float);	
};

int Calculator::add(int a,int b)
{
	return a+b;
}

float Calculator::add(float a,float b)
{
	return a+b;
}

float Calculator::add(int a,float b)
{
	return a+b;
}

int main()
{
	int num1,num2;
	float num3,num4;
	Calculator calc;
	
	//Adding two integers
	cout<<"===Performing Addition==="<<endl;
	cout<<"Enter two integer numbers: ";
	cin>>num1>>num2;
	cout<<num1<<"+"<<num2<<" = "<<calc.add(num1,num2)<<endl;
	
	//Adding two floats
	cout<<"Enter two decimal numbers(floats): ";
	cin>>num3>>num4;
	cout<<num3<<"+"<<num4<<" = "<<calc.add(num3,num4)<<endl;
	
	//Adding one integer and one decimal(float) number
	cout<<"Enter one integer and one decimal(floats) numbers: ";
	cin>>num1>>num3;
	cout<<num1<<"+"<<num3<<" = "<<calc.add(num1,num3)<<endl;
	
	
	return 0;
}

/*
OUTPUT:
===Performing Addition===
Enter two integer numbers: 1 3
1+3 = 4
Enter two decimal numbers(floats): 2.5 4.8
2.5+4.8 = 7.3
Enter one integer and one decimal(floats) numbers: 2 6.8
2+6.8 = 8.8
*/
