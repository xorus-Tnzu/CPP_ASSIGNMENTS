#include<iostream>
using namespace std;

class Counter
{
	private:
		static int count;
	public:
		Counter();
		
		static int getCount();		
};

int Counter::count=0;

Counter::Counter()
{
	count++;	
}
		
int Counter::getCount()
{
	return count;
}

int main()
{
	Counter c1;//1st Counter Object Created..
	Counter c2;//2nd Counter Object Created..
	Counter c3;//3rd Counter Object Created..
	
	cout<<"Total Number Of Objects Created: "<<Counter::getCount()<<endl;
	return 0;
}

/*
OUTPUT:
Total Number Of Objects Created: 3
*/
