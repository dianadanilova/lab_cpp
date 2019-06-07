#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Department
{
private:
	string name;
	Employee* head;
public:
	void setName(string NewName)
	{
		name = NewName;
		return;
	}
	string getName();
	void setHead(Employee* newHead)
	{
		head = newHead;
		return;
	}
	Employee* getHead();
	void print()
	{
		cout << name << "," << head << endl;
	}
};

class Employee
{
private:
	string position;
	int room;
	idCard* card;
	Department* department;
public:
	void setPosition(string newPosition)
	{
		position = newPosition;
		return;
	}
	string getPosition();
	void setIdCard(idCard* newIdCard)
	{
		card = newIdCard;
		return;
	}
	idCard* getIdCard();
	void setRoom(int newRoom)
	{
		room = newRoom;
		return;
	}
	int getRoom();
	void setDepartment(Department* newDepartment)
	{
		department = newDepartment;
		return;
	}
	Department* getDepartment;
	void print()
	{
		cout << position << "," << room << "," << card << "," << department << endl;
	}
};

class idCard
{
private:
	int number;
	string dateExpire;
public:
	void setNumber(int newNumber)
	{
		number = newNumber;
		return;
	}
	int getNumber();
	void setDateExpire(string newDateExpire)
	{
		dateExpire = newDateExpire;
		return;
	}
	string getDateExpire();
	void print();
};
int main()
{
	Employee Ivan_Ivanovich_Ivanov, Petrov_Petr_Petrovich, Sidorov_Sidor_Sidorovich, Mikhailov_Mikhail_Mikhailovich, Aleksandrova_Aleksandra_Aleksandrovna, Evgeniyevna_Evgeniya_Evgeniyeva;
	razrabotka.setName("Департамент разработка");
	razrabotka.setHead(&Ivan_Ivanovich_Ivanov);
	administratciya.setName("Департамент администрация");
	administratciya.setHead(&Mikhailov_Mikhail_Mikhailovich);

	Ivan_Ivanovich_Ivanov.setPosition("Glava Department");
	Ivan_Ivanovich_Ivanov.setDepartment(&razrabotka);
	Ivan_Ivanovich_Ivanov.setRoom(101);

	Petrov_Petr_Petrovich.setPosition("Главный разработчик");
	Petrov_Petr_Petrovich.setDepartment(&razrabotka);
	Petrov_Petr_Petrovich.setRoom(102);

	Sidorov_Sidor_Sidorovich.setPosition("Разработчик");
	Sidorov_Sidor_Sidorovich.setDepartment(&razrabotka);
	Sidorov_Sidor_Sidorovich.setRoom(102);

	Mikhailov_Mikhail_Mikhailovich.setPosition("Директор");
	Mikhailov_Mikhail_Mikhailovich.setDepartment(&administratciya);
	Mikhailov_Mikhail_Mikhailovich.setRoom(201);

	Aleksandrova_Aleksandra_Aleksandrovna.setPosition("Зам директора");
	Aleksandrova_Aleksandra_Aleksandrovna.setDepartment(&administratciya);
	Aleksandrova_Aleksandra_Aleksandrovna.setRoom(201);

	Evgeniyevna_Evgeniya_Evgeniyeva.setPosition("Глав бух");
	Evgeniyevna_Evgeniya_Evgeniyeva.setDepartment(&administratciya);
	Evgeniyevna_Evgeniya_Evgeniyeva.setRoom(201);

	razrabotka.print();
	administratciya.print();

	getch();
	
	return 0;
};
