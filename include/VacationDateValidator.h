#pragma once
#include "Validator.h"
#include "Date.h"

class VacationDateValidator : public Validator<Date>
{
public:
	//get overrride
	VacationDateValidator(const Date&);
	bool validate(const Date&) const override;
private:

};
