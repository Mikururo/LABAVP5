#include <iostream>
#include "Seance.h"
using namespace std;

Seanse::Seanse(value start, value end, const char* name, value hall)
{
	StartSeance = start;
	EndSeance = end;
	PlayName = (string)name;
	HallNummer = hall;
}

Seanse::~Seanse() {}

void Seanse::ShowInfo()
{
	cout << "Начало пьесы: " << StartSeance << endl;
	cout << "Конец пьесы:  " << EndSeance << endl;
	cout << "Название пьесы: " << PlayName << endl;
	cout << "Номер зала: " << HallNummer << endl;
}
