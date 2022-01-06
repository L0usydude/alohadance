#pragma once
#include <iostream>
#include <fstream>
#include <string>
class People
{
protected:
	std::string surname;
	std::string name;
public:
	People() = default;
	~People() = default;
	virtual std::string getname()
	{
		return name;
	}
	virtual std::string getsurname()
	{
		return surname;
	}
	virtual void setname(std::string newone)
	{
		name = newone;
	}
	virtual void setsurname(std::string newone)
	{
		surname = newone;
	}

};