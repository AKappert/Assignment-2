#include "pch.h"
#include <iostream>
#include "customer.h"
#include "date.h"
#include <string>

using namespace std;


Customer::Customer()
{
	customer_Name = "N/A";
	customer_License = "N/A";
	customer_DOB = Date();
}

Customer::Customer(string name, string license, Date dob)
{
	customer_Name = name;
	customer_License = license;
	customer_DOB = dob;
}

void Customer::setCustomer(string name, string license, Date dob)
{
	customer_Name = name;
	customer_License = license;
	customer_DOB = dob;
}

void Customer::setCustomerName(string name)
{
	customer_Name = name;
}

void Customer::setCustomerLicense(string license)
{
	customer_License = license;
}

void Customer::setCustomerDOB(Date dob)
{
	customer_DOB = dob;
}

string Customer::getCustomerName()
{
	return customer_Name;
}

string Customer::getCustomerLicense()
{
	return customer_License;
}

Date Customer::getCustomerDOB()
{
	return customer_DOB;
}

void Customer::printCustomerInfo()
{
	cout << "Customer Name:          " << customer_Name << endl;
	cout << "Customer License:       " << customer_License << endl;
	cout << "Customer Date of Birth: ";
	customer_DOB.printDate();
}


Customer::~Customer()
{
	cout << "customer destructor executed";
}
