#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
	long hours;
	unsigned char minutes;
	
public:
	void setTime(long newHours, unsigned char newMinutes)
	{
		minutes=newMinutes;
		hours=newHours;
	}
	long getHours()
	{
		cout<< hours<< ","<< (int)minutes<<endl;
	}
	unsigned char getMinutes();
	Time operator+(Time & plusTime);
	Time operator-(Time & minusTime);
	Time operator*(int mulTimes);
	void print()
	{
		cout<<this->hours<<":"<<(int)this->minutes<<endl;
	}
};
Time Time::operator+(Time & plusTime)
{
	Time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes>=60)
	{
		result.minutes=result.minutes-60;
		result.hours=result.hours+1;
	}
	return result;
}
Time Time::operator-(Time & minusTime)
{
	int k;
	Time result;
	result.hours=this->hours-minusTime.hours;
	k=this->minutes-minusTime.minutes;
	if (k<0)
	{
		result.hours=result.hours-1;
		result.minutes=v+60;
	}
	else
	{
		result.minutes=v;
	}
	return result;
}
Time Time::operator*(int mulTime)
{
	Time result;
	result.hours=this->hours*mulTime;
	result.minutes=this->minutes*mulTime;
	if (result.minutes>=60)
	{
		while (result.minutes>=60)
		{
			result.minutes=result.minutes-60;
			result.hours=result.hours+1;
		}
	}
	return result;
}
void main()
{
	Time a,b,c,d,e;
	a.setTime(2,30);
	b.setTime(1,40);
	c=a.operator+(b);
	c.print();
	d=a-b;
	d.print();
	e=a*2;
	e.print();
}
