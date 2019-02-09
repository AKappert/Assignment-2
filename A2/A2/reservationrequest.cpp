#include "pch.h"
#include <iostream>
#include "reservationrequest.h"
#include "date.h"
#include "vehicle.h"
#include "customer.h"




using namespace std;


ReservationRequest::ReservationRequest()
{



	counter++;
	reservation_number = counter;
}


ReservationRequest::~ReservationRequest()
{


}
