#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

class Money
{
private:
	int Rubley;
	unsigned char Kopeek;

public:
	void set(int newRubley);
	void set(int newKopeek);
	int getRubley();
	unsigned char getKopeek();
	void addMoney(Money &someMoney);
	void withdrawMoney(Money &someMoney);
	void print();
};

void Money::set(int newRubley)
{
	this->Rubley = newRubley;
}

void Money::set(int newKopeek)
{
	this->Kopeek = newKopeek;
}

int Money::getRubley()
{
	return this->Rubley;
}

unsigned char Money::getKopeek()
{
	return this->Kopeek;
}

void Money::addMoney(Money &someMoney)
{
	this->Rubley += someMoney.Rubley;
	this->Kopeek += someMoney.Kopeek;
}

void Money::withdrawMoney(Money &someMoney)
{
	this->Rubley -= someMoney.Rubley;
	this->Kopeek -= someMoney.Kopeek;
}

void Money::print()
{
	cout << Rubley << "," << Kopeek << endl;
}
