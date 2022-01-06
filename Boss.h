#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "People.h"
#include "Worker.h"
#include <vector>
class Boss : public People
{
private:
	int BossSalary;
	std::vector<class Worker> BossWorkers;
public:
	Boss()
	{
		BossSalary = 0;
	}
	Boss(int newsal, std::vector<class Worker> newcount)
	{
		BossSalary = newsal;
		BossWorkers = newcount;
	}
	~Boss()
	{
		BossSalary = 0;
	}
	int getbosssalary()
	{
		return BossSalary;
	}
	std::vector<Worker>& getmassofworkers()
	{
		return BossWorkers;
	}
	void setbosssalary(int newsalary)
	{
		BossSalary = newsalary;
	}
	void setnewmassofworkers(std::vector<Worker> newmass)
	{
		BossWorkers = newmass;
	}
	double getbossprem()
	{
		if (BossWorkers.size() >= 1 && BossWorkers.size() <= 5)
		{
			return 1.05;
		}
		else if (BossWorkers.size() > 5 && BossWorkers.size() <= 15)
		{
			return 1.08;
		}
		else if (BossWorkers.size() > 15)
		{
			return 1.15;
		}
	}
	void addworker(Worker sth)
	{
		BossWorkers.push_back(sth);
	}
	void removeworker(Worker sth)
	{
		for (int i = 0; i < BossWorkers.size(); i++)
		{
			if (sth == BossWorkers[i])
			{
				BossWorkers.erase(BossWorkers.begin() + i);
			}
		}
	}
	double getbosssalarywithprem()
	{
		return BossSalary * getbossprem();
	}

	
};
