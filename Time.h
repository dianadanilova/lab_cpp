class Time
{
private:
	long hours;
	unsigned char minutes;
public:
	void setTime(long newHours, unsigned char newMinutes)
	{
		minutes = newMinutes;
		hours = newHours;
	}

	long getHours();
	
	unsigned char getMinutes();
	Time operator+(Time & plusTime);
	Time operator-(Time & minusTime);
	Time operator*(int mulTimes);
	bool operator<(Time & minusTime);
	bool operator>(Time & minusTime);
	void print()
	
};


Time Time::operator+(Time & plusTime)
{
	Time result;
	result.hours = this->hours + plusTime.hours;
	result.minutes = this->minutes + plusTime.minutes;
	if (result.minutes >= 60)
	{
		result.minutes = result.minutes - 60;
		result.hours = result.hours + 1;
	}
	return result;
}

Time Time::operator-(Time & minusTime)
{
	int v;
	Time result;
	result.hours = this->hours - minusTime.hours;
	v = this->minutes - minusTime.minutes;
	if (v < 0)
	{
		result.hours = result.hours - 1;
		result.minutes = v + 60;
	}
	else
	{
		result.minutes = v;
	}
	return result;
}

Time Time::operator*(int mulTime)
{
	Time result;
	result.hours = this->hours*mulTime;
	result.minutes = this->minutes*mulTime;
	while (result.minutes >= 60)
	{
		result.minutes = result.minutes - 60;
		result.hours = result.hours + 1;
	}
	return result;
}

bool Time::operator< (Time &minusTime)
{

	if (this->hours < minusTime.hours) return true;
	else return false;
}

bool Time::operator > (Time &minusTime)
{
	if (this->hours > minusTime.hours) return true;
	else return false;
}