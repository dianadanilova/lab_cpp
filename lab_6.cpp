#include <iostream>
#include "stdafx.h"
#include <string>
using namespace std;

class book
{
private:
	std::string name;
	int year;
public:
	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_info();
};

void book::set_name(const char * new_name)
{
	this->name = new_name;
	return;
}

void book::set_year(const int new_year)
{
	this->year = new_year;
	return;
}
void book::get_info()
{
	cout << this->name << "(" << this->year << ")";
	return;
}

class reader
{
private:
	string name;
	int age;
public:
	book book;
	void set_name(const char * new_name);
	void set_age(const int new_age);
	void get_info();
};

void reader::set_name(const char * new_name)
{
	this->name = new_name;
	return;
}

void reader::set_age(const int new_age)
{
	this->age = new_age;
	return;
}
void reader::get_info()
{
	cout << this->name << "(" << this->age << ")";
	book.get_info();
	return;
}


int _tmain()
{
	book a;						
	a.set_name("War and peace");
	a.set_year(1869);
	a.get_info();
	system("pause");

	book b;
	b.set_name("The Lord of the Rings");
	b.set_year(2002);
	b.get_info();
	system("pause");

	book c;
	c.set_name("Harry Potter and the Sorcerers Stone");
	c.set_year(2001);
	c.get_info();
	system("pause");

	reader d;	
	d.set_name("Vanya");
	d.set_age(18);
	d.book = a;
	d.get_info();
	system("pause");

	reader e;
	e.set_name("Kolya");
	e.set_age(35);
	e.book = b;
	e.get_info();
	system("pause");

	reader f;
	f.set_name("Natasha");
	f.set_age(18);
	f.book = c;
	f.get_info();
	system("pause");

	return 0;
}
