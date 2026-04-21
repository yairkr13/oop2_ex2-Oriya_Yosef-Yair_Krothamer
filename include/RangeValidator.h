#pragma once
#include "Validator.h"
#include <string>

template <class T>
class RangeValidator: public Validator<T>
{
public:
	RangeValidator(const T&,const T&, const std::string&);
	bool validate(const T&) const override;

private:
	std::string m_errorMessage;
	T m_rangeStart, m_rangeEnd;
};

template <class T>
RangeValidator<T>::RangeValidator(const T& start, const T& end, const std::string& err):
	m_rangeStart(start),m_rangeEnd(end),m_errorMessage(err)
{ }

template <class T>
bool RangeValidator<T>::validate(const T& t) const
{
	return t > m_rangeStart && t < m_rangeEnd;
}