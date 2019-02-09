#pragma once
#include "date.h"
#include "vehicle.h"
#include "customer.h"


class ReservationRequest
{
public:
	ReservationRequest();
	
	
	
	
	~ReservationRequest();


private:
	Customer customer;
	string vehicle_type;
	int counter;
	int reservation_number;
	Date reservation_date;
	Date reservation_start;
	Date reservation_end;
	int car_capacity__truck_weight;
	
};

