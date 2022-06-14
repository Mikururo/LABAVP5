#pragma once
#include<iostream>
#include <string>
using namespace std;
class User
{
public:
	string Name;
	string Surname;
	unsigned int Age;
	string Login;
	string Password;
	string Titel;
	virtual void  ShowDate() = 0;
	virtual void ShowPrivateDate() = 0;
	virtual void ShowOpportunities() = 0;
	string ShowTitel()
	{
		return Titel;
	}   
	friend bool operator==( User& s_1, User& s_2);
private:
	User* Person{};
	friend ostream& operator<<(ostream&, User&);
	friend istream& operator>>(istream&, User&);
};

