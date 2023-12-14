#ifndef UNTITLED3_TRANSPORT_H
#define UNTITLED3_TRANSPORT_H

#include <string>
#include <iostream>

using namespace std;

class Transport {
private:
    double _maxSpeed;

protected:
    Transport(double maxSpeed) : _maxSpeed(maxSpeed) {}
    ~Transport() = default;

public:
    virtual void Drive() = 0;
};

class Car : public Transport {
public:
    Car(double maxSpeed) : Transport(maxSpeed) {}
    ~Car() = default;

    void Drive() override {
        cout << "ride" << endl;
    }
};

class Plane : public Transport {
private:
    double _maxHeight;
public:
    Plane(double maxSpeed, double maxHeight) : Transport(maxSpeed), _maxHeight(maxHeight) {}
    ~Plane() = default;

    void Drive() override {
        cout << "fly" << "\n" << _maxHeight << endl;
    }
};

#endif //UNTITLED3_TRANSPORT_H