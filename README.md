# Assignment-2

Define the following classes to manage the fleet of a vehicle rental agency. Include one or more constructors, destructor and the necessary set and get functions for each class. Also, provide a print function for each class which outputs all the data members of that
class.

a) Define a class Date that has the following data members: month, day and year.

b) Define a class Vehicle that has the following data members:
- Model of the vehicle (e.g., Ford, Toyota) as a standard library string.
- The date that vehicle has joined to the fleet from part (a).
- The mileage of the vehicle as an integer.
- A four digit id of the vehicle as a standard library string, such as string vehicle_id = "2345";
- A two-dimensional 12-by-30 array of Boolean variables that shows whether the vehicle is available or has been rented out for each day   of the year. If the vehicle is available on a given date then Boolean variable is true and if rented out is false. Each row of the       array corresponds to a month and for simplicity we assume that the number of days in each month is 30.

c) Derive a Car class from the Vehicle class, the class should have an additional data member for the passenger capacity as an integer. Derive a Truck class from the Vehicle class, the class should have an additional data member for the weight limit of the truck as an integer.

d) Define a class Customer with the following data members:
- The name of the customer as a standard library string.
- The driving license of the customer as a library string.
- The date of birth of the customer (from part a).

e) Define a ReservationRequest class with the following data members,
- A customer object from part (d).
- A library string as the vehicle_type which is either “car” or “truck”.
- An integer counter that generates reservation request numbers.
- An integer as a reservation request number. The counter is incremented by one each time a reservation request object is created, then   this value is assigned as the reservation request number.
- Reservation date from part (a).
- The starting date of the rental from part (a).
- The end date of the rental from part (a).
- An integer for passenger capacity of the requested car or weight limit of the truck.

f) Define a class named Payment that contains a member variable of type float that stores the amount of the payment. Also create a member function named paymentDetails that outputs an English sentence that describes the amount of the payment. Next define a class named CashPayment that is derived from Payment. This class should redefine the paymentDetails function to indicate that the payment is in cash. Define a class named CreditCardPayment that is derived from Payment. This class should contain member variables for the name on the card, expiration date, and credit card number. Finally, redefine the paymentDetails function to include all credit card information in the printout.

g) Define a class VehicleRentalContract with the following data members:
- A reservation request object from (e).
- A pointer to the reserved Car object. If reserved vehicle is not a car, then this pointer should be set to a nullpointer.
- A pointer to the reserved Truck object. If reserved vehicle is not a truck, then this pointer should be set to a nullpointer.
- A pointer to CashPayment from (f). If payment mode isnot cash, then this pointer should be set to a nullpointer.
- A pointer to CreditCardPayment from (f). If payment mode is not by credit card, then this pointer should be set to a nullpointer.
- A Boolean variable that is set to true when the customer picks up the vehicle and sets to false when it returns.

h) Define a class FleetManager with the following data members,
- A variable carfleet_size that specifies the number of cars in the fleet.
- A variable truckfleet_size that specifies the number of trucks in the fleet.
- Collection of cars in the fleet, may be an array of car objects.
- Collections of trucks in the fleet, may be an array of truck objects.
- Collection of customers, may be an array of customer objects.
- Collection of vehicle rental contracts, may be an array of CarRentalContract objects.

At least the following additional member functions should be provided,
- A member function that processes a reservation request received as a parameter. If reservation is successfuI it should return           reservation request number otherwise zero. The reserved vehicle should have the closest capacity larger than the requested capacity.     If reservation is successful a car rental object should be created and stored in the array of CarRentalContract.
- A member function that receives a reservation request number as a parameter and outputs the details of the related car rental contract   object.
- A member function that receives a reservation request number and current date as parameters and cancels reservation request.
- A member function that processes the returned vehicles which has the request reservation number and new milage of the vehicle as         parameters.

i) A main function that creates customer objects and reservation requests objects. It calls to the FleetManager member functions to process all rental tasks. 

Key Considerations for the assignment:
- You must enforce encapsulation by keeping all data members private.
- For each class that you create you need to separate the specification of the class from its implementation by using header files. Make   sure that you submit with your answer both the .h and .cpp files for each class.
- In the implemented member functions the relevant data members should be updated.
- You need to make sure that your classes are well defined using the various concepts seen in the class including constant member         functions, static members, inline functions, etc.
- Objects should be created dynamically and must be deleted when no longer needed. There should be an output statement confirming the     deletion of an object from the destructor function.
