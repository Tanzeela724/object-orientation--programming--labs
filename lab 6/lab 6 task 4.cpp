#include <iostream>
using namespace std;

// Base Class
class Device {
protected:
    string deviceName;
    int deviceID;
    int* data; 

public:
    Device(string name, int id) : deviceName(name), deviceID(id) {
        
        data = new int[5]{10, 20, 30, 40, 50}; 
        cout << "Device [" << deviceName << "] constructor: Dynamic data allocated." << endl;
    }

    
    virtual ~Device() {
        delete[] data;
        cout << "Device [" << deviceName << "] destructor: Dynamic data freed." << endl;
    }
};


class Sensor : public Device {
private:
    string sensorType;
    float* sensorValue; 

public:
    Sensor(string name, int id, string type, float val) : Device(name, id), sensorType(type) {
        
        sensorValue = new float(val);
        cout << "Sensor (" << sensorType << ") constructor: Dynamic value allocated." << endl;
    }

    ~Sensor() {
        delete sensorValue;
        cout << "Sensor (" << sensorType << ") destructor: Dynamic value freed." << endl;
    }
};

int main() {
    cout << "--- Initializing System with new ---" << endl;
    
    
    Device* mySystem = new Sensor("MainController", 5001, "Temperature", 98.6);

    cout << "\nSystem is running...\n" << endl;

    cout << "--- Cleaning up with delete ---" << endl;
    
    delete mySystem; 

    return 0;
}
