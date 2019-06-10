#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

class spell
{
public:
	string name;
	int dhp;
	int dmp;
};

class mage
{
private:
	int hp;
	int mp;
	string name;

public:
	void init(int newhp, int newmp, string newname);
	string getname();
	void say(string text);
	int cast(spell & spl, mage & target);
	void hit(spell & spl);
};

void mage::init(int newhp, int newmp, string newname)
{
	this->hp = newhp;
	this->mp = newmp;
	this->name = newname;
}

string mage::getname()
{
	return this->name;
}

void mage::say(string text)
{
	cout << this -> name << " " << "say" << " " << text;
	return;
}

int mage::cast(spell & spl, mage & target)
{
	cout << this->name << " " << "hits" << " " << spl.name << " " << "yeah" << " " << target.getname() << endl;
	target.hit(spl);
	return 0;
}

void mage::hit(spell & spl)
{
	this->hp = this->hp - spl.dhp;
	if (hp < 0)
	this->say("Loser\n");
		
	return;
}

int _tmain()
{
	spell hit, cast;

	hit.dhp = 20;
	hit.dmp = 70;
	hit.name = "cast";

	cast.dhp = 35;
	cast.dmp = 64;
	cast.name = "hit";

	mage Boris, Vanya;

	Vanya.init(50, 80, "Vanya");
	Boris.init(30, 70, "Boris");

	Vanya.cast(cast, Boris);
	Vanya.cast(hit, Boris);
	Boris.cast(cast, Vanya);
	Boris.cast(hit, Vanya);
	Vanya.cast(cast, Boris);
	Boris.cast(hit, Vanya);

	system("pause");

	return 0;
}

