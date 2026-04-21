#include "Date.h"
#include <iomanip> // for std::setw and std::setfill

Date::Date(int year,int month,int day): m_year(year), m_month(month), m_day(day)
{ }

Date Date::operator-(const Date& other) const
{
	int yearsDiff = m_year - other.m_year;
	int monthsDiff = m_month - other.m_month;
	int daysDiff = m_day - other.m_day;
	return Date(yearsDiff * 365, monthsDiff * 30, daysDiff);
}

bool Date::operator<(const Date& other) const
{
    if (m_year < other.getYear())
        return true;
    else if (m_year == other.getYear())
        if (m_month < other.getMonth())
            return true;
        else if (m_month == other.getMonth())
            return m_day < other.getDay();
    return false;
}

bool Date::operator>(const Date& other) const
{
    return !(this < other);
}

std::ostream& operator<<(std::ostream& os, const Date& date)
{
    // מדפיס בפורמט YYYY-MM-DD
    // setw(2) ו- setfill('0') מבטיחים שחודש 5 יודפס כ-05
    os << date.getYear() << "-"
        << std::setw(2) << std::setfill('0') << date.getMonth() << "-"
        << std::setw(2) << std::setfill('0') << date.getDay();

    return os;
}

std::istream& operator>>(std::istream& is, Date& date)
{
    char dash1, dash2;
	int year, month, day;
	is >> year >> dash1 >> month >> dash2 >> day;
	date.setDay(day);
	date.setMonth(month);
	date.setYear(year);
    return is;
}

int Date::getYear() const
{
    return m_year;
}

int Date::getMonth() const
{
    return m_month;
}

int Date::getDay() const
{
    return m_day;
}

void Date::setYear(int year)
{
    m_year = year;
}

void Date::setMonth(int month)
{
    m_month = month;
}

void Date::setDay(int day)
{
    m_day = day;
}