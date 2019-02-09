// Andrew Kappert (40063638)
// August Marco Eine ()

#include "pch.h"
#include <iostream>
#include "date.h"
#include "vehicle.h"
#include "customer.h"


using namespace std;



int main()
{
	
	Vehicle testvehicle("INF_G35", "Infiniti", Date(1,30,2019), 192500, 10, 5);
	for (int booked = 4; booked < 13; booked++)
		testvehicle.setVehicleBooked(2, booked);	
	testvehicle.setVehicleBooked(10, 6);
	testvehicle.setVehicleBooked(10, 7);
	testvehicle.setVehicleAvailable(10, 6);
	testvehicle.printVehicleInfo();

	cout << "\n";
	Customer tescustomer("Andrew Kappert", "A_Kappert123", Date(11, 24, 1997));
	tescustomer.printCustomerInfo();


	cout << "\n";
	system("pause");
	return 0;
}