#include <iostream>
#include <fstream>
#include <string>
#include "People.h"
#include "Worker.h"
#include <vector>
#include "Boss.h"
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("ForBoss.txt");
	int A;
	fin >> A;
	vector<Boss> mass;
	string abc;
	int tmp;
	for (int i = 0; i < A; i++)
	{
		fin >> abc;
		mass[i].setname(abc);
		fin >> abc;
		mass[i].setsurname(abc);
		fin >> tmp;
		mass[i].setbosssalary(tmp);
	}
	fin.close();
	fin.open("ForWorkers.txt");
	fin >> A;
	int x;
	Worker newtmp;
	for (int i = 0; i < A; i++)
	{
		fin >> abc;
		newtmp.setname(abc);
		fin >> abc;
		newtmp.setsurname(abc);
		fin >> tmp;
		newtmp.sethours(tmp);
		fin >> tmp;
		newtmp.setage(tmp);
		fin >> tmp;
		newtmp.setsalaryph(tmp);
		fin >> x;
		newtmp.setboss(&mass[x]);
		mass[x].addworker(newtmp);	
	}
	fout.close();
	fin.open("ForBoss.txt");
	int N;
	fin >> N;

	for (int i = 0; i < N; i++)
	{

	}

}