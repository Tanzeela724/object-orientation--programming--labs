#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle Constructor Called (Base)" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car Constructor Called (Derived from Vehicle)" << endl;
    }
};


class ElectricCar : public Car {
public:
    ElectricCar() {
        cout << "ElectricCar Constructor Called (Derived from Car)" << endl;
    }
};

int main() {
    cout << "Creating an ElectricCar object to observe execution order:" << endl;
    
    ElectricCar myTesla;

    return 0;
}
