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
	cout << "������ �����: " << StartSeance << endl;
	cout << "����� �����:  " << EndSeance << endl;
	cout << "�������� �����: " << PlayName << endl;
	cout << "����� ����: " << HallNummer << endl;
}
