#include "pch.h"
#include "Stroka.h"


Stroka::Stroka()
{
}

Stroka::Stroka(string value)
{
	this->Value = value;
}

Stroka* Stroka::operator-(Stroka b)
{
	string firstOp = this->Value;
	string secondOp = b.Value;
	
	if (firstOp.find(secondOp) != string::npos)
	{
		
		firstOp.erase(firstOp.find(secondOp), secondOp.length());
	}
	return new Stroka(firstOp);
}

Stroka * Stroka::operator=(Stroka *c1)
{
	this->Value = c1->Value;
	return this;
}

Stroka* Stroka::operator=(string &value) {
	this->Value = value;
	return this;
}

Stroka::~Stroka()
{
}

ostream & operator<<(ostream & os, const Stroka & st)
{
	os << st.Value << endl;
	return os;
}

istream & operator>>(istream & is, Stroka & st)
{
	getline(is, st.Value);
	return is;
}
