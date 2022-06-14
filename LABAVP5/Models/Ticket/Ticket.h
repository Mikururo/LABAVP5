#pragma once
#include <iostream>
#include <string>
using namespace std;
class Ticket
{
public:
	string PlayName;
	unsigned int Place{};

	Ticket(const char*, unsigned int);
	~Ticket();
	void ShowInfo();
};

