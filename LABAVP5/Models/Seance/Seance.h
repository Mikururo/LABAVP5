#pragma once
#include <iostream>
#include <string>
using namespace std;
class Seanse
{
public:
	typedef unsigned int value;
	value StartSeance{};
	value EndSeance{};
	string PlayName;
	value HallNummer{};

	Seanse(value, value, const char*, value);
	~Seanse();
	virtual void ShowInfo();
};
