#pragma once
#include "date.h"


using namespace std;

class Vehicle
{

public:
	Vehicle();
	Vehicle(string, string, Date, int);
	Vehicle(string, string, Date, int, int, int);
	void setVehicle(string, string, Date, int);
	void setVehicle(string, string, Date, int, int, int);
	void setVehicleID(string);
	void setVehicleModel(string);
	void setVehicleJoined(Date);
	void setVehicleMileage(int);
	void setVehicleBooked(int, int);
	void setVehicleAvailable(int, int);

	string getVehicleID();
	string getVehicleModel();
	Date getVehicleJoined();
	int getVehicleMileage();
	bool getVehicleAvailabilty(int, int);

	void printVehicleInfo();

	~Vehicle();



private:
	string vehicle_ID = "No Info";
	string vehicle_Model = "No Info";
	Date vehicle_Joined = Date();
	int vehicle_Mileage = -1;
	bool vehicle_Booking[12][30];


};

