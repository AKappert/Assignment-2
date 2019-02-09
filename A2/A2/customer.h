#pragma once
#include "date.h"


class Customer
{
public:
	Customer();
	Customer(string, string, Date);
	void setCustomer(string, string, Date);
	void setCustomerName(string);
	void setCustomerLicense(string);
	void setCustomerDOB(Date);

	string getCustomerName();
	string getCustomerLicense();
	Date getCustomerDOB();

	void printCustomerInfo();

	~Customer();

private:
	string customer_Name = "N/A";
	string customer_License = "N/A";
	Date customer_DOB = Date();

};

