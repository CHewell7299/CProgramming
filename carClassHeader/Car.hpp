// Header file (.hpp, .h)
// Desc of the class

/*
    TODO
    ADD:
    mileage: odometer of the car
    fuel_capacity: tank capacity of the car
    fuel_level: current fuel in gal
    
    Methods:
    void refuel(double gallons);  - Add gallons to the tank, make sure to pay attention to fuel capacity.
    void drive(double distance);  - if car has enough fuel to drive distance, print <Car (make, model) is driving>!




*/

#include <string>

class Car {
public:
    //Constructors
    Car();  //No Arg
    Car(std::string make_, std::string model_, int year_, double MPG_, int mileage_, double fuelCapacity_, double fuelLevel_);
    // Accessors
    // Constant methods - cannot modify class properties
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    int getMileage() const;
    double getFuelCapacity() const;
    double getFuelLevel() const;
    
    // Mutators
    void setMake(std::string newMake);
    void setModel(std::string newModel);
    void setYear(int newYear);
    void setMPG(double newMPG);
    void setMileage(int newMileage);
    void setFuelCapacity(double newFuelCapacity);
    void setFuelLevel(double newFuelLevel);

    // print function
    void print() const;

    // Refuel
    void refuel(double gallons);

    // Drive
    void drive(double distance);

private:
    std::string make;
    std::string model;
    int year;
    double MPG;
    int mileage;
    double fuelCapacity;
    double fuelLevel;

};