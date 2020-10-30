#include"Record.h"
#include"phoneBook.h"

Record::Record()
{
	;
}

Record::Record(string person, int phone)
{
	name = person;
	number = phone;
}

string Record::getName()
{
	return name;
}

int Record::getNumber()
{
	return number;
}

void Record::setName(string s)
{
	name = s;
}

void Record::setNumber(int n)
{
	number = n;
}

Record::~Record()
{
	;
}
