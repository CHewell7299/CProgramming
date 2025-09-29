// Implementation of Car class
#include "Car.hpp"
#include <iostream>

//No - arg constr
Car::Car(){
    setMake("Unknown");
    setModel("Unknown");
    setYear(1900);
    setMPG(0.0);
    setMileage(0);
    setFuelCapacity(20.0);
    setFuelLevel(0);
}

//Arg Constr
Car::Car(std::string make_, std::string model_, int year_, double MPG_, int mileage_, double fuelCapacity_, double fuelLevel_){
    setMake(make_);
    setModel(model_);
    setYear(year_);
    setMPG(MPG_);
    setMileage(mileage_);
    setFuelCapacity(fuelCapacity_);
    setFuelLevel(fuelLevel_);
}

// Setters
void Car::setMake(std::string newMake){
    if (!newMake.empty()){
        make=newMake;
    }
}
void Car::setModel(std::string newModel){
    if (!newModel.empty()){
        model=newModel;
    }
}
void Car::setYear(int newYear){
    year=(newYear >= 1900 && newYear <=2025) ? newYear : 1900;
}
void Car::setMPG(double newMPG){
    MPG = (newMPG > 0) ? newMPG : 0;
}
void Car::setMileage(int newMileage){
    mileage = newMileage;
}
void Car::setFuelCapacity(double newFuelCapacity){
    fuelCapacity = newFuelCapacity;
}
void Car::setFuelLevel(double newFuelLevel){
    fuelLevel = newFuelLevel;
}

// getters
std::string Car::getMake() const{
    return make;
}
std::string Car::getModel() const{
    return model;
}
int Car::getYear() const{
    return year;
}
double Car::getMPG() const{
    return MPG;
}
int Car::getMileage() const{
    return mileage;
}
double Car::getFuelCapacity() const{
    return fuelCapacity;
}
double Car::getFuelLevel() const{
    return fuelLevel;
}

// Print
void Car::print() const{
    std::cout << "Make: " << getMake() << std::endl;
    std::cout << "Model: " << getModel() << std::endl;
    std::cout << "Year: " << getYear() << std::endl;
    std::cout << "MPG: " << getMPG() << std::endl;
    std::cout << "Mileage: " << getMileage() << std::endl;
    std::cout << "Fuel Capacity: " << getFuelCapacity() << std::endl;
    std::cout << "Fuel Level: " << getFuelLevel() << std::endl;
}

// Refuel
void Car::refuel(double gallons){
    if(getFuelLevel() + gallons > getFuelCapacity()){
        std::cout << "Overfueling! Tank filled to capacity, " << gallons - (getFuelCapacity()-getFuelLevel()) << " gallons wasted." << std::endl;
        setFuelLevel(getFuelCapacity());
        return;
    }
    if(gallons<0){
        std::cout << "Stop trying to add negative fuel. Use a positive argument." << std::endl;
        return;
    }
    setFuelLevel(getFuelLevel()+gallons);
    std::cout << "Adding " << gallons << " gallons to tank. New fuel level: " << getFuelLevel() << std::endl;
    return;
}

// Drive
void Car::drive(double distance){
    if(distance > getFuelLevel() * getMPG()){
        std::cout << "Not enough fuel to drive that far :(  Try adding some fuel." << std::endl;
        return;
    }
    if(distance < 0){
        std::cout << "Are you driving in reverse? Use a positive argument." << std::endl;
        return;
    }
    std::cout << getMake() << ", " << getModel() << " is driving!" << std::endl;
    setMileage(getMileage()+distance);
    setFuelLevel(getFuelLevel() - distance/getMPG());
}