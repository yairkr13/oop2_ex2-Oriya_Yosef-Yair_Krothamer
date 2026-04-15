#include "Date.h"

Date::Date(int year,int month,int day): m_year(year), m_month(month), m_day(day)
{ }
/*
Date &operator-(const Date& date1, const Date& date2)
{
	int yearsDiff = date1.m_year - date2.m_year;
	int monthsDiff = date1.m_month - date2.m_month;
	int daysDiff = date1.m_day - date2.m_day;
	return Date(yearsDiff * 365, monthsDiff * 30, daysDiff);
}*/

std::ostream& operator<<(std::ostream& os, const Date& date)
{
    // מדפיס בפורמט YYYY-MM-DD
    // setw(2) ו- setfill('0') מבטיחים שחודש 5 יודפס כ-05
    os << date.getYear() << "-"
        << std::setw(2) << std::setfill('0') << date.getMonth() << "-"
        << std::setw(2) << std::setfill('0') << date.getDay();

    return os;
}

// מימוש אופרטור >> (קלט)
std::istream& operator>>(std::istream& is, Date& date)
{
    char dash1, dash2;

    // מנסים לקרוא שנה, אחר כך תו (שאמור להיות מקף), חודש, עוד תו, ויום
    if (is >> date.getYear() >> dash1 >> date.getMonth() >> dash2 >> date.getDay())
    {
        // מוודאים שהתווים שהופרדו הם אכן מקפים
        if (dash1 != '-' || dash2 != '-')
        {
            // אם הפורמט לא נכון, אנחנו מסמנים לזרם הקלט שהייתה שגיאה
            is.setstate(std::ios::failbit);
        }
    }

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