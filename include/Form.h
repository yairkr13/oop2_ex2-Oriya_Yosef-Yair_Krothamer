#pragma once
#include "BaseField.h"
#include <vector>
#include <iostream>

class Form //public base??????????????
{
	friend std::ostream& operator<<(std::ostream& os, const Form& form);//change to no friend
public:
	Form();
	void addField(BaseField* field);
	void fillForm();
	bool validateForm() const;
private:
	std::vector<BaseField*> m_fields;
};

std::ostream& operator<<(std::ostream& os, const Form& form);
