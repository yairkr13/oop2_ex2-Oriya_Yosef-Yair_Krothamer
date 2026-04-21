#pragma once
#include "Validator.h"
#include <string>

class nameValidator : public Validator<std::string>
{
public:
	//get overrride
	bool validate(std::string) const override;
private:

};
