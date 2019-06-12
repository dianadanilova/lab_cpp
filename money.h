class money
{
private:
	long rubles;
	unsigned char kopeyks;
public:
	void setMoney(long newRubles, unsigned char newKopeyks)
	{
		rubles = newRubles;
		kopeyks = newKopeyks;
	}

	long getRubles();
	
	unsigned char getMoneys();
	money operator+(money & plusMoney);
	money operator-(money & minusMoney);
	money operator*(int mulMoneys);
	bool operator<(money & minusMoney);
	bool operator>(money & minusMoney);
	void print();
};


money money::operator+(money & plusMoney)
{
	money result;
	result.rubles = this->rubles + plusMoney.rubles;
	result.rubles = this->kopeyks + plusMoney.kopeyks;
	if (result.kopeyks >= 100)
	{
		result.kopeyks = result.kopeyks - 100;
		result.rubles = result.rubles + 1;
	}
	return result;
}

money money::operator-(money & minusMoney)
{
	int v;
	money result;
	result.rubles = this->rubles - minusMoney.rubles;
	v = this->kopeyks - minusMoney.kopeyks;
	if (v < 0)
	{
		result.rubles = result.rubles - 1;
		result.kopeyks = v + 100;
	}
	else
	{
		result.kopeyks = v;
	}
	return result;
}

money money::operator*(int mulMoney)
{
	money result;
	result.rubles = this->rubles*mulMoney;
	result.kopeyks = this->kopeyks*mulMoney;
	while (result.kopeyks >= 100)
	{
		result.kopeyks = result.kopeyks - 100;
		result.rubles = result.rubles + 1;
	}
	return result;
}

bool money::operator< (money &minusMoney)
{

	if (this->rubles< minusMoney.rubles) return true;
	else return false;
}

bool money::operator > (money &minusMoney)
{
	if (this->rubles > minusMoney.rubles) return true;
	else return false;
}