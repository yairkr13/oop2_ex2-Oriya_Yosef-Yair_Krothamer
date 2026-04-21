#pragma once
#include "Validator.h"
#include "BaseField.h"
#include <string>
#include <iostream>

template <class T>
class Field: public BaseField
{
public:
	Field(const std::string& question);
	void addValidator(const Validator<T>* valid);
	void print() const; //operator <<!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	void getInput();
	// Returns true if the field is valid, and false otherwise:
	bool checkValid() const;
private:
	std::string m_question;
	T m_element;
	Validator<T> *m_validator;
	//is valid???????????????????
};
//-----------------------------------------------------------

template <class T>
Field<T>::Field(const std::string& question) : m_question(question), m_validator(nullptr)
{
}

template <class T>
bool Field<T>::checkValid() const
{
	return m_validator->validate(m_element);
}

template <class T>
void Field<T>::addValidator(const Validator<T>* valid)
{
	m_validator = valid;
}

template <class T>
void Field<T>::print() const
{
	std::cout << m_question << " = " << m_element << std::endl;//changeeeeeee
}

template <class T>
void Field<T>::getInput()
{
	std::cout << m_question << std::endl; //keep like this????????
	std::cin >> m_element;
}
