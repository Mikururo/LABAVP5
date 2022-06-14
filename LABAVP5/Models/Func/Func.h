#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Models\User\User.h"
#include "C:\Users\lak10\source\repos\LABAVP5\LABAVP5\Vector.h"
using namespace std;

class Func
{
	typedef void (Func::* MovieFunc)();
public:
	void AddElement();
	void DeleteElement();
	void ChangeElement();
	void SortElemnts();
	void start();
	void show(int);
	unsigned int m_count{};
	Vector<User*> ArrayUsers;
	Vector<pair<const char*, MovieFunc>>vecF_test;
	int m_select{};
	int select{};
	bool realizationObject(int);
	void MenuObject();

};

