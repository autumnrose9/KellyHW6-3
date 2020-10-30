#ifndef RECORD_H
#define RECORD_H

#include<string>
#include<iostream>
using namespace std;
using std::string;

class Record
{
	private:
		string name;
		int number;
	public:
		Record();
		Record(string person, int phone);
		string getName();
		int getNumber();
		void setName(string s);
		void setNumber(int n);
		~Record();
};

#endif //RECORD_H
