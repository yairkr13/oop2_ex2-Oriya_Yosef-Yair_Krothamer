#pragma once

class Date
{
public:
	Date(int year=0, int month=0, int day=0);
	int getYear() const;
	int getMonth() const;
	int getDay() const;
private:
	int m_year;
	int m_month;
	int m_day;
};

operator<<()