#pragma once
#include "Validator.h"
#include <cstdint> // for uint32_t


class nameValidator : public Validator<unit32_t>
{
public:
	//get overrride
	bool validate(const unit32_t&) const override;
private:

};
