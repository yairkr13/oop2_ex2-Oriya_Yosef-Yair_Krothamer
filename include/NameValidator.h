#pragma once
#include "Validator.h"
#include <string>

class nameValidator: public Validator<std::string>
{
public:
	//get overrride
	bool validate(const std::string&) const override;
private:

};
