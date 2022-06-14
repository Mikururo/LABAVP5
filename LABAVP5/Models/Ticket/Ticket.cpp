#include <iostream>						
#include "Ticket.h"
using namespace std;

Ticket::Ticket(const char* play, unsigned int place) : PlayName{ (string)play }, Place{ place } {};

Ticket::~Ticket() {}

void Ticket::ShowInfo()
{
	cout << "�������� �����: " << PlayName << endl;
	cout << "�����: " << Place << endl;
}
