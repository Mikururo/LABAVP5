#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\User\User.h"
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\Func\Func.h"
using namespace std;

class Mymenu
{
	typedef void (Func::* MovieFunc)();
public:
	Mymenu();
	void print_menu();
	bool realization();
	Func tirtir;
	unsigned int choise{};
};

