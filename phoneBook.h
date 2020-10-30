#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Record.h"
#include<iostream>

using std::string;
using namespace std;
const int MAXSIZE = 10;

class PhoneBook
{
	private:
		Record list[MAXSIZE];
		string bookName;
		int num_records = 0;
		int findName (string s);

	public:
		PhoneBook();
		PhoneBook(string s);
		string getPhoneBookName();
		int getNumberofRecords();
		void insert(string name, int number);
		void displayPhoneBook();
		void removeName(string s);
		int getPhoneNumber(string s);
		~PhoneBook();
};

#endif //PHONEBOOK_H
