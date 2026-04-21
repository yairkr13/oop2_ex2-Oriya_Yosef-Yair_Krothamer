#include "VacationDateValidator.h"

VacationDateValidator::VacationDateValidator(const Date & currDate):
	m_currDate(currDate)
{ }

bool VacationDateValidator::validate(const Date& date) const
{
	//smaller then the current year and bigger then the current date
	return date > m_currDate && date < m_currDate.getYear();
}