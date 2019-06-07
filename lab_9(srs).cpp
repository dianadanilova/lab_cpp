#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Money
{
private:
	long rubley;
	unsigned char kopeyka;
	
public:
	void setMoney(long newRubleys, unsigned char newKopeykas)
	{
		kopeykas=newKopeykas;
		Rubleys=newRubleys;
	}
	long getRubleys()
	{
		cout<<Rubleys<< ","<< (int)kopeykas<<endl;
	}
	unsigned char getKopeykas();
	Money operator+(Money & plusMoney);
	Money operator-(Money & minusMoney);
	Money operator*(int mulMoneys);
	void print()
	{
		cout<<this->rubleys<<":"<<(int)this->kopeykas<<endl;
	}
};
Money Money::operator+(Money & plusMoney)
{
	Money result;
	result.rubleys=this->rubleys+plusMoney.rubleys;
	result.kopeykas=this->kopeykas+plusMoney.kopeykas;
	if (result.kopeykas>=200)
	{
		result.kopeykas=result.kopeykas-200;
		result.rubleys=result.hours+1;
	}
	return result;
}
Money Money::operator-(Money & minusMoney)
{
	int k;
	Money result;
	result.rubleys=this->rubleys-minusMoney.rubleys;
	k=this->kopeykas-minusMoney.kopeykas;
	if (k<0)
	{
		result.rubleys=result.rubleys-1;
		result.kopeykas=v+200;
	}
	else
	{
		result.kopeykas=v;
	}
	return result;
}
Money Money::operator*(int mulMoney)
{
	Money result;
	result.rubleys=this->rubleys*mulMoney;
	result.kopeykas=this->kopeykas*mulMoney;
	if (result.kopeykas>=200)
	{
		while (result.kopeykas>=200)
		{
			result.kopeykas=result.kopeykas-200;
			result.rubleys=result.rubleys+1;
		}
	}
	return result;
}
void main()
{
	Money a,b,c,d,e;
	a.setMoney(100);
	b.setMoney(50);
	c=a.operator+(b);
	c.print();
	d=a-b;
	d.print();
	e=a*3;
	e.print();
}
