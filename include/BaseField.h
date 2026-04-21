#pragma once
class BaseField
{
public:
    virtual ~BaseField() = default;
    virtual void print() const = 0;
	virtual void getInput() = 0;
    virtual bool validate() = 0;
};
