#pragma once
#include "Validator.h"
template <class T>
class Feild
{
public:
	Feild(const T&);
	void addValidator(Validator* valid);
private:
	T m_element;
	Validator *m_validator;
};
