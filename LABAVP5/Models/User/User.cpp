#include "User.h"

bool operator==(User& s_1, User& s_2)
{
	if (s_1.Titel == s_2.Titel)
		return true;
	else
		return false;
}
ostream& operator<<(ostream& os, User& viewer)
{
	viewer.ShowPrivateDate();
	return os;
}

istream& operator>>(istream& in, User& viewer)
{
	cout << "Имя, Фамилия, возраст, логин, пароль" << endl;
	in >> viewer.Name >> viewer.Surname >> viewer.Age >> viewer.Login >> viewer.Password;
	return in;
}
