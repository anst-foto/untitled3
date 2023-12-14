#include <iostream>

#include "Transport.h"

using namespace std;

void PrintDrive(Transport *transport);

int main() {
    Car* car = new Car(200);
    Plane* plane = new Plane(300, 1000);
    Transport* bus = new Car(70);
    Transport* airbus = new Plane(300, 10000);
    //BUG Transport* transport = new Transport(1);

    PrintDrive(car);
    PrintDrive(plane);
    PrintDrive(bus);
    PrintDrive(airbus);

    return 0;
}

void PrintDrive(Transport *transport) {
    transport->Drive();
}