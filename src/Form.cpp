#include "Form.h"

Form::Form()
{ }

void Form::addField(BaseField* field)
{
	m_fields.push_back(field);
	//m_fields.back()->print();
}

//display the questions and ask for the input
void Form::fillForm()
{
	for (const auto& field : m_fields)
	{
		//field->print();
		//std::cout << '\n';
		field->getInput();
	}
}
//
//std::ostream& operator<<(std::ostream& os, const Form& form)
//{
//	for (const auto& field : form.m_fields)
//	{
//		field->print();
//		os << '\n';
//	}
//	return os;
//}

bool Form::validateForm() const
{
	for (const auto& field : m_fields)//template function???????????????????????
	{
		//field->print();
		if (field->validate())
			field->print();
	}
}