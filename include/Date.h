#pragma once
#include <iostream>

class Date
{
public:
	Date(int year=0, int month=0, int day=0);
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	Date operator-(const Date& other) const;

	bool operator<(const Date& other) const;
	bool operator>(const Date& other) const;

	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);
private:
	int m_year;
	int m_month;
	int m_day;
};

std::istream& operator>>(std::istream& is, Date& date);
std::ostream& operator<<(std::ostream& os, const Date& date);