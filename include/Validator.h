#pragma once
#include "BaseValidator.h"

template <class T>
class Validator//: public BaseValidator
{
public:
	//Validator();
	//template <class T> virtual bool validate(T& t) = 0;//template function
	//template <> virtual bool validate<T>() const = 0;
	virtual bool validate(const T&) const = 0;
private:

};
