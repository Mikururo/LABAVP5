#include <iostream>
#include "Cashier.h"
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\User\User.h"
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\Seance\Seance.h"
using namespace std;

Cashier::Cashier(line name, line surname, unsigned int age, line login, line password, line titel)
{
	Name = (string)name;
	Surname = (string)surname;
	Age = age;
	Login = (string)login;
	Password = (string)password;
	Titel = (string)titel;
}
Cashier::Cashier()
{
	Name = " ";
	Surname = " ";
	Age = 0;
	Login = " ";
	Password = " ";
	Titel = (string)"Кассир";
}

void Cashier::ShowDate()
{
	Seanse seance(19, 23, "Don Quijote", 7);
	seance.ShowInfo();
}

void Cashier::ShowPrivateDate()
{
	cout << Name << endl;
	cout << Surname << endl;
	cout << Age << endl;
	cout << Login << endl;
	cout << Password << endl;
}
void Cashier::ShowOpportunities()
{
	cout << "1 - показать данные" << endl;
	cout << "2 - показать личные данные" << endl;
}

Cashier::~Cashier() {}

ostream& operator<<(ostream& out, Cashier& cashier)
{
	cashier.ShowPrivateDate();
	return out;
}

istream& operator>>(istream& in, Cashier& cashier)
{
	cout << "Имя, Фамилия, возраст, логин, пароль" << endl;
	in >> cashier.Name >> cashier.Surname; 
	in >> cashier.Age;
	if (!cin)
	{
		throw exception("Некорректный ввод данных в блоке \"AddElement\"");
	}
	in >> cashier.Login >> cashier.Password;
	return in;
}
