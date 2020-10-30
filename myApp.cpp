#include"Record.h"
#include"phoneBook.h"

#include<iostream>
#include<string>

int main()
{
	int check = 1;
	PhoneBook phone_book;
	while (check == 1)
	{
		cout << "---------------------------------------------" << endl;
		cout << "1. Insert a name and Number" << endl;
		cout << "2. Get a number for a person" << endl;
		cout << "3. Display Phone Book" << endl;
		cout << "4. Remove a person from the phone book" << endl;
		cout << "5. Quit" << endl;
		cout << "---------------------------------------------" << endl;

		string cmd;
		cin >> cmd;

		if(cmd == "1")
		{
			string name;
			int number;
			cout << "---------------------------------------------" << endl;
			cout << "Insert Name: " << endl;
			cin >> name;
			cout << "Insert Number: " << endl;
			cin >> number;
			phone_book.insert(name, number);
			cout << "---------------------------------------------" << endl;
		}
		else if(cmd == "2")
		{
			int num;
			string name;
			cout << "---------------------------------------------" << endl;
			cout << "Insert Name: " << endl;
			cin >> name;
			num = phone_book.getPhoneNumber(name);
			cout << "The number for " << name << " is " << num << endl;
			cout << "---------------------------------------------" << endl;
		}
		else if(cmd == "3")
		{
			cout << "---------------------------------------------" << endl;
			cout << "Searching the Phone Book ..." << endl;
			phone_book.displayPhoneBook();
			cout << "The number of records is " << phone_book.getNumberofRecords() << endl;
			cout << "---------------------------------------------" << endl;
		}
		else if(cmd == "4")
		{
			string name;
			cout << "---------------------------------------------" << endl;
			cout << "Insert Name to remove: " << endl;
			cin >> name;
			phone_book.removeName(name);
			cout << "---------------------------------------------" << endl;
		}
		else if(cmd == "5")
		{
			cout << "---------------------------------------------" << endl;
			cout << "Exiting the Phone Book Application" << endl;
			cout << "---------------------------------------------" << endl;
			check = 0;
		}
		else
		{
			cout << "Invalid Command" << endl;
		}
		cmd.clear();
	}
	return 0;
}
