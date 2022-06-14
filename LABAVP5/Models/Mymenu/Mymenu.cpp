#include "Mymenu.h"
using namespace std;
enum Variants { main_menu, object_menu };
Mymenu::Mymenu()
{
	tirtir.start();
}
void Mymenu::print_menu()
{
	system("cls");
	cout << "Пользователи: " << endl;
	for (int i = 0; i < tirtir.ArrayUsers.size(); i++)
	{
		cout << i+1 << ") " << tirtir.ArrayUsers[i]->Titel << endl;
	}
	cout << "\nФункции: " << endl;
	for (int i{}; i < tirtir.vecF_test.size(); i++)
	{
		cout << tirtir.vecF_test[i].first << endl;
	}
}

bool Mymenu::realization()
{
	print_menu();
	cout << "\nSelect >> ";
	cin >> choise;
	if (choise > 0 && choise <= tirtir.vecF_test.size())
	{
		tirtir.show(choise-1);
		return true;
	}
	else
	{
		throw exception("Выход за пределы допустимых значений либо ввод некорректных данных в блоке \"realization\"");
		return false;
	}
}
