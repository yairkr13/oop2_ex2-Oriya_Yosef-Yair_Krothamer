#include "NameValidator.h"

bool validate(const std::string& name) const
{
	int length = name.length();
	if (length < 3)
		return false;
	for (int i = 0;i < name.length();i++)
		if (std::isdigit(name[i]))
			return false;
	return true;
}