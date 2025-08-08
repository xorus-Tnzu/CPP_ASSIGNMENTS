#include<iostream>
using namespace std;

class Time
{
	int hour;
	int minute;
	int second;
	
	public:
		void getData();
		void putData();
		
		Time addTime(Time);
	
};

void Time::getData()
{
	cout<<"Enter Hour: ";
	cin>>this->hour;
	cout<<"Enter Minutes: ";
	cin>>this->minute;
	cout<<"Enter Second: ";
	cin>>this->second;
	cout<<"-----------------"<<endl;
}

void Time::putData()
{
	cout<<"Time is: "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
}

Time Time::addTime(Time t2)
{
	Time t;
	t.hour=this->hour+t2.hour;
	t.minute=this->minute+t2.minute;
	t.second=this->second+t2.second;
	
	if(t.second>=60)
	{
		t.minute+=(t.second)/60;
		t.second=t.second-((t.second)/60)*60;
	}
	
	if(t.minute>=60)
	{
		t.hour+=(t.minute)/60;
		t.minute=t.minute-((t.minute)/60)*60;
	}
	return t;
}
int main()
{
	Time t1,t2,t3;
	
	cout<<"Enter Time-1: "<<endl;
	t1.getData();
	
	
	cout<<"Enter Time-2: "<<endl;
	t2.getData();
	
	
	t3=t1.addTime(t2);
	
	cout<<"Time-1: ";
	t1.putData();
	cout<<"Time-2: ";
	t2.putData();
	cout<<"Time-1 + Time-2: ";
	t3.putData();
}

/*
OUTPUT:
Enter Time-1:
Enter Hour: 12
Enter Minutes: 57
Enter Second: 55
-----------------
Enter Time-2:
Enter Hour: 5
Enter Minutes: 25
Enter Second: 59
-----------------
Time-1: Time is: 12:57:55
Time-2: Time is: 5:25:59
Time-1 + Time-2: Time is: 18:23:54
*/
