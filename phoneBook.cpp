#include"phoneBook.h"
#include"Record.h"
#include<iostream>

PhoneBook::PhoneBook()
{
	 ;
}

PhoneBook::PhoneBook(string s)
{
	bookName = s;
}

string PhoneBook::getPhoneBookName()
{
	return bookName;
}

int PhoneBook::getNumberofRecords()
{
	 return num_records;
}

void PhoneBook::insert(string name, int number)
{
	int i;
	for(i = 0; i<=num_records;i++)
	{
		;
	}
	list[i].setName(name);
	list[i].setNumber(number);
	cout << "Inserted " << name << " into the Phone Book" << endl;
	num_records++;
}

void PhoneBook::displayPhoneBook()
{
	for(int count = 1; count <= num_records; count++)
	{
		cout << list[count].getName()  << " - " << list[count].getNumber() << endl;
	}
}

void PhoneBook::removeName(string s)
{
	   for (int i = 0; i < num_records; i++)
	   {
		   if(list[i].getName() == s)
		   {
			   for (i = i; i < num_records; i++)
			   {
				   list[i] = list[i+1];
			   }
		   }
	   }
	   num_records--;
}

int PhoneBook::getPhoneNumber(string s)
{
	int i;
	int number;
	for(i = 0; i <= num_records; i++)
	{
		if(list[i].getName() == s)
		{
			number = list[i].getNumber();
			return number;	
		}
	}
	cout << "Name does not exist" << endl;
	return 0;
}

PhoneBook::~PhoneBook()
{
	;
}

