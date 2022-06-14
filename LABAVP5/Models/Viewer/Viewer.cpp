#include "Viewer.h"
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models/Ticket\Ticket.h"

using namespace std;

Viewer::Viewer(line name, line surname, unsigned int age, line login, line password, line titel)
{
	Name = (string)name;
	Surname = (string)surname;
	Age = age;
	Login = (string)login;
	Password = (string)password;
	Titel = (string)titel;
}

Viewer::Viewer()
{
	Name = " ";
	Surname = " ";
	Age = 0;
	Login = " ";
	Password = " ";
	Titel = (string)"Зритель";
}

void Viewer::ShowDate()
{
	Ticket ticket("Don Quijote", 48);
	ticket.ShowInfo();
}

void Viewer::ShowPrivateDate()
{
	cout << Name << endl;
	cout << Surname << endl;
	cout << Age << endl;
	cout << Login << endl;
	cout << Password << endl;
}

void Viewer::ShowOpportunities()
{
	cout << "1 - показать данные" << endl;
	cout << "2 - показать личные данные" << endl;
}

Viewer::~Viewer() {}

ostream& operator<<(ostream& os, Viewer& viewer)
{
	viewer.ShowPrivateDate();
	return os;
}

istream& operator>>(istream& in, Viewer& viewer)
{
	cout << "Имя, Фамилия, возраст, логин, пароль" << endl;
	in >> viewer.Name >> viewer.Surname;
	in >> viewer.Age;
	if (!cin)
	{
		throw exception("Некорректный ввод данных в блоке \"AddElement\"");
	}
	in >> viewer.Login >> viewer.Password;
	return in;
}
