#include "pch.h"
#include <iostream>
#include "vehicle.h"
#include "date.h"
#include <string>

using namespace std;

Vehicle::Vehicle()
{
}

Vehicle::Vehicle(string id, string model, Date joined, int miles)
{
	vehicle_ID = id;
	vehicle_Model = model;
	vehicle_Joined = joined;
	vehicle_Mileage = miles;
}

Vehicle::Vehicle(string id, string model, Date joined, int miles, int month_booked, int day_booked)
{
	vehicle_ID = id;
	vehicle_Model = model;
	vehicle_Joined = joined;
	vehicle_Mileage = miles;
	if (month_booked > 0 && month_booked <=12 && day_booked > 0 && day_booked <= 30)
		vehicle_Booking[month_booked-1][day_booked-1] = false;

}

void Vehicle::setVehicle(string id, string model, Date joined, int miles)
{
	vehicle_ID = id;
	vehicle_Model = model;
	vehicle_Joined = joined;
	vehicle_Mileage = miles;
}

void Vehicle::setVehicle(string id, string model, Date joined, int miles, int month_booked, int day_booked)
{
	vehicle_ID = id;
	vehicle_Model = model;
	vehicle_Joined = joined;
	vehicle_Mileage = miles;
	if (month_booked > 0 && month_booked <= 12 && day_booked > 0 && day_booked <= 30)
		vehicle_Booking[month_booked-1][day_booked-1] = false;
}

void Vehicle::setVehicleID(string id)
{
	vehicle_ID = id;
}

void Vehicle::setVehicleModel(string model)
{
	vehicle_Model = model;
}

void Vehicle::setVehicleJoined(Date joined)
{
	vehicle_Joined = joined;
}

void Vehicle::setVehicleMileage(int miles)
{
	vehicle_Mileage = miles;
}

void Vehicle::setVehicleBooked(int month_booked, int day_booked)
{
	if (month_booked > 0 && month_booked <= 12 && day_booked > 0 && day_booked <= 30)
		vehicle_Booking[month_booked-1][day_booked-1] = false;
}

void Vehicle::setVehicleAvailable(int month_booked, int day_booked)
{
	if (month_booked > 0 && month_booked <= 12 && day_booked > 0 && day_booked <= 30)
		vehicle_Booking[month_booked-1][day_booked-1] = true;
}

string Vehicle::getVehicleID()
{
	return vehicle_ID;
}

string Vehicle::getVehicleModel()
{
	return vehicle_Model;
}

Date Vehicle::getVehicleJoined()
{
	return vehicle_Joined;
}

int Vehicle::getVehicleMileage()
{
	return vehicle_Mileage;
}

bool Vehicle::getVehicleAvailabilty(int month_booked, int day_booked)
{
	return vehicle_Booking[month_booked-1][day_booked-1];
}

void Vehicle::printVehicleInfo()
{
	cout << "Vehicle ID:             " << vehicle_ID << endl;
	cout << "Vehicle Model:          " << vehicle_Model << endl;
	cout << "Vehicle Joined:         "; (vehicle_Joined.printDate());
	cout << "\nVehicle Mileage:        " << vehicle_Mileage << endl;
	cout << "Vehicle Availability:  (mm / dd)\n";
	
	for (int month = 1; month <= 12; month++)
	{
		for (int day = 1; day <= 30; day++)
		{
			if (vehicle_Booking[month - 1][day - 1] == false)
			{
				cout << "                        " << (month) << " / " << (day) << " is booked\n";
			}
		}
	}
}


Vehicle::~Vehicle()
{
	cout << "vehice destructor executed";
}
