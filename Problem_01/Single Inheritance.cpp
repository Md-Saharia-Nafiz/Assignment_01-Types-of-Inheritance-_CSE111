#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    // Virtual function allows derived classes to override it
    virtual void startEngine()
    {
        cout << "Starting the generic vehicle engine..." << endl;
    }
};

// Derived class Car inherits from Vehicle
class Car : public Vehicle
{
public:
    // Override startEngine for Car
    void startEngine() override
    {
        cout << "Starting the car engine..." << endl;
    }
};

// Derived class Bike inherits from Vehicle
class Bike : public Vehicle
{
public:
    // Override startEngine for Bike
    void startEngine() override
    {
        cout << "Starting the bike engine..." << endl;
    }
};

int main()
{
    // Creating objects of derived classes
    Car myCar;
    Bike myBike;

    // Pointer of type Vehicle pointing to Car object
    Vehicle* vehiclePtr = &myCar;
    vehiclePtr->startEngine(); // Calls Car's startEngine due to runtime polymorphism

    // Pointer of type Vehicle pointing to Bike object
    vehiclePtr = &myBike;
    vehiclePtr->startEngine(); // Calls Bike's startEngine due to runtime polymorphism

    // Alternatively, using references
    Vehicle& vehicleRef1 = myCar;
    vehicleRef1.startEngine(); // Calls Car's startEngine

    Vehicle& vehicleRef2 = myBike;
    vehicleRef2.startEngine(); // Calls Bike's startEngine

    return 0;
}

