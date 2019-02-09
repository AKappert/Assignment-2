#pragma once

using namespace std;

class Date
{
public:
	Date();
	Date(int, int, int);
	void setDate(int, int, int);
	void printDate();


	~Date();


private:
	int month = 0;
	int day = 0;
	int year = 0;
};

