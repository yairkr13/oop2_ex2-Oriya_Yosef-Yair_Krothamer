#include "IdValidator.h"
#include <string>

bool validate(const uint32_t& id) const
{
	std::string=strId=std::to_string(id);
	int sum = 0;
	for (int i = 0;i < 8;i++)
	{
		sum += (int)strId[i] * ((i % 2) + 1);
	}
	return (int)strId[8] == (10 - (sum % 10)%10);
}