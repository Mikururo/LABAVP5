#pragma once
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\User\User.h"
#include "C:\Users\lak10\source\repos\LABAVP5/LABAVP5\Models\Seance\Seance.h"
class Cashier : public User
{
public:
	typedef const char* line;
	Cashier(line name, line surname, unsigned int age, line login, line password, line titel = "Кассир");
	Cashier();
	void  ShowDate() override;
	void  ShowPrivateDate() override;
	void ShowOpportunities() override;
	~Cashier();
	friend ostream& operator<<(ostream& out, Cashier& cashier);
	friend istream& operator>>(istream& in, Cashier& cashier);
};

