#include <string>;

using namespace std;
#pragma once
class Stroka
{
public:
	Stroka();
	Stroka(string value);
	Stroka* operator- (Stroka b);
	string Value;
	friend ostream& operator<<(ostream& os, const Stroka& st);
	friend istream& operator>>(istream& is, Stroka& st);
	Stroka* operator =(Stroka *c1);
	Stroka* operator=(string &value);
	~Stroka();
};

