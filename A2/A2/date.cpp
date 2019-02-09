#include "pch.h"
#include "date.h"
#include <iostream>

using namespace std;

Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}

Date::Date(int m, int d, int y)
{
	if (m >= 1 && m <= 12) month = m;
	if (d >= 1 && d <= 31) day = d;
	year = y;
}

void Date::setDate(int m, int d, int y)
{
	if (m >= 1 && m <= 12) month = m;
	if (d >= 1 && d <= 31) day = d;
	year = y;
}


void Date::printDate()
{
	cout << month << " / " << day << " / " << year;
}

Date::~Date()
{
	//cout << "date destructor executed";
}
