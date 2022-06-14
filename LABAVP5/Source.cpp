#include <iostream>
#include <vector>
#include "Models/Mymenu/Mymenu.h"
#include "Models/User/User.h"
#include "Models/Cashier/Cashier.h"
#include "Models/Viewer/Viewer.h"
using namespace std;

int main()
{
	system("chcp 1251 >> null");
	Mymenu menu;
	try
	{
		while (menu.realization()) {};
	}
	catch (const std::exception& ex)
	{
		system("cls");
		cout << ex.what() << endl;;
	}
	return 0;
}