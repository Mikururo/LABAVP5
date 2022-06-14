#pragma once
#include <iostream>
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\User\User.h"
using namespace std;
class Viewer : public User
{
public:
	typedef const char* line;
	Viewer(line name, line surname, unsigned int age, line login, line password, line titel = "«ритель");
	Viewer();
	void  ShowDate() override;
	void  ShowPrivateDate() override;
	void ShowOpportunities() override;
	~Viewer();
	friend ostream& operator<<(ostream&, Viewer&);
	friend istream& operator>>(istream&, Viewer&);
};

