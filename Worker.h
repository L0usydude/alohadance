#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "People.h"
#include "Boss.h"

class Worker : public People 
{
private:
	int countofhours;
	int ageofwork;
	int salaryperhour;
	Boss* BossOfWorker;

public:
	Worker() = default;
	Worker(std::string name1, std::string surname1, int count, int age, int sal, Boss* newboss)
	{
		name = name1;
		surname = surname1;
		countofhours = count;
		ageofwork = age;
		salaryperhour = sal;
		BossOfWorker = newboss;
	}
	Worker(Worker& abc)
	{
		name = abc.name;
		surname = abc.surname;
		countofhours = abc.countofhours;
		ageofwork = abc.ageofwork;
		salaryperhour = abc.salaryperhour;
		BossOfWorker = abc.BossOfWorker;
	}
	Worker(Worker&& abc)
	{
		name = abc.name;
		surname = abc.surname;
		countofhours = abc.countofhours;
		ageofwork = abc.ageofwork;
		salaryperhour = abc.salaryperhour;
		BossOfWorker = abc.BossOfWorker;
		abc.name = nullptr;
		abc.surname = nullptr;
		abc.countofhours = 0;
		abc.salaryperhour = 0;
		abc.ageofwork = 0;
		abc.BossOfWorker = nullptr;
	}
	double getprem()
	{
		if (ageofwork < 3 && ageofwork!= 0)
		{
			return 1.03;
		}
		else if (ageofwork >= 3 && ageofwork < 5)
		{
			return 1.05;
		}
		else if (ageofwork >= 5 && ageofwork < 7)
		{
			return 1.09;
		}
		else if (ageofwork >= 7)
		{
			return 1.13;
		}
		else
		{
			return 1;
		}
	}
	double getsalary()
	{
		return countofhours * salaryperhour * getprem();
	}
	int gethours()
	{
		return countofhours;
	}
	int getsalaryperhour()
	{
		return salaryperhour;
	}
	int getage()
	{
		return ageofwork;
	}
	void setage(int newage)
	{
		ageofwork = newage;
	}
	void setsalaryph(int newsalary)
	{
		salaryperhour = newsalary;
	}
	void sethours(int newhours)
	{
		countofhours = newhours;
	}
	bool operator==(Worker right)
	{
		if (name == right.name && surname == right.surname && countofhours == right.countofhours && ageofwork == right.ageofwork && salaryperhour == right.salaryperhour)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	Boss& getboss()
	{
		return *BossOfWorker;
	}
	void setboss(Boss* newone)
	{
		BossOfWorker = newone;
	}
};