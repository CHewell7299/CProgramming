// Testing file
#include "Car.hpp"

int main(){
    //Create a car obj
    Car f150("Ford", "F150", 1987, 15.6, 237000 , 45.0, 15.0);
    f150.print();

    f150.refuel(35);
    f150.drive(703);
    f150.drive(702);
    f150.refuel(15);
    f150.refuel(-1);
    f150.drive(-1);

    f150.print();

    return 0;
}