#include "Func.h"
#include <iostream>
#include <array>
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\Viewer\Viewer.h"
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\Cashier\Cashier.h"
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Vector.h"
using namespace std;
enum Users { cashier, viewer };

void Func::AddElement()
{
	system("cls");
	cout << "1 - ������" << endl;
	cout << "2 - �������" << endl;
	int choise;
	cin >> choise;
	if (!cin)
	{
		throw exception("������������ ���� ������ � ����� \"AddElement\"");
	}
	choise -= 1;
	if (choise == cashier)
	{
		Cashier* a_cashier = new Cashier();
		cin >> *a_cashier;
		ArrayUsers.push_back(*&a_cashier);
	}
	else if (choise == viewer)
	{
		Viewer* a_viewer = new Viewer();
		cin >> *a_viewer;
		ArrayUsers.push_back(*&a_viewer);
	}
	else
	{
		throw exception("����� �� ������� ���������� � ����� \"AddElement\"");
	}
}  

void Func::DeleteElement()
{
	system("cls");
	cout << "������� ����� ��������, ������� ������ �������:" << endl;
	int choise; cin >> choise;
	if (!cin)
	{
		throw exception("������������ ���� ������ � ����� \"DeleteElement\"");
	}
	if (choise <= ArrayUsers.size())
	{
		ArrayUsers.erase(choise-1);
	}
	else
	{
		throw exception("����� �� ������� ���������� � ����� \"DeleteElement\"");
	}
}

void Func::ChangeElement()
{
	system("cls");
	cout << "������� ����� ��������, ������� ������ ��������:" << endl;
	int choise; cin >> choise;
	if (!cin)
	{
		throw exception("������������ ���� ������ � ����� \"ChangeElement\"");
	}
	if (choise <= ArrayUsers.size())
	{
		cin >> *ArrayUsers[choise-1];
	}
	else
	{
		throw exception("����� �� ������� ���������� � ����� \"ChangeElement\"");
	}
}

void Func::SortElemnts()
{
	system("cls");
	cout << "������������ ������������ �� ��������: ��� ������������ - " << ArrayUsers[0]->ShowTitel() << endl;;
	for (int i = 0; i < ArrayUsers.size(); i++)
	{
		if (*ArrayUsers[0] == *ArrayUsers[i])
		{
			cout << ArrayUsers[i]->Name << "  " << ArrayUsers[i]->Surname << endl;
		}
	}
	system("pause");
}

void Func::start()
{
	Cashier* cashier = new Cashier("Ilya", "K.", 20, "student1", "qaswed");
	Viewer* viewer = new Viewer("Ilya", "B.", 20, "student2", "0000");
	ArrayUsers.push_back(*&viewer);
	ArrayUsers.push_back(*&cashier);
	vecF_test.push_back(make_pair("1 - �������� ������������", &Func::AddElement));
	vecF_test.push_back(make_pair("2 - ������� ������������", &Func::DeleteElement));
	vecF_test.push_back(make_pair("3 - �������� ������������", &Func::ChangeElement));
	vecF_test.push_back(make_pair("4 - ���������� ������������� �� ��������", &Func::SortElemnts));
	vecF_test.push_back(make_pair("5 - ���� ������������", &Func::MenuObject));
}

void Func::show(int part)
{
	(this->*vecF_test[part].second)();
}

bool Func::realizationObject(int choise)
{
	system("cls");;
	ArrayUsers[choise]->ShowOpportunities();
	cout << "\nSelect >> ";
	cin >> select;
	if (!cin)
	{
		throw exception("������������ ���� ������ � ����� \"realizationObject\"");
	}
	switch (select)
	{
	case 1:
		system("cls");
		ArrayUsers[choise]->ShowDate();
		system("pause");
		break;
	case 2:
		system("cls");
		ArrayUsers[choise]->ShowPrivateDate();
		system("pause");
		break;
	default:
		return false;
	}
	return true;
}

void Func::MenuObject()
{
	system("cls");;
	for (int i{}; i < ArrayUsers.size(); i++)
	{
		cout << i+1 << ") " << ArrayUsers[i]->ShowTitel() << endl;;
	}
	cout << "\nSelect >> ";
	cin >> m_select;
	if (!cin)
	{
		throw exception("������������ ���� ������ � ����� \"MenuObject\"");
	}
	m_select--;
	if (m_select >= 0 && m_select < ArrayUsers.size())
	{   while (realizationObject(m_select)) {}; }
	else
	{
		throw exception("����� �� ������� ���������� � ����� \"MenuObject\"");
	}
}

