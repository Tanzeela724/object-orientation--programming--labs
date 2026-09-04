#include <iostream>
using namespace std;

class HospitalStaff
{
protected:
    string staffName;

public:
    HospitalStaff(string name)
    {
        staffName = name;
    }

    virtual void performDuty() = 0;
};

class Doctor : public HospitalStaff
{
public:
    Doctor(string name) : HospitalStaff(name)
    {
    }

    void performDuty()
    {
        cout <<  "Doctor is diagnosing patients." << endl;
    }
};

class Nurse : public HospitalStaff
{
public:
    Nurse(string name) : HospitalStaff(name)
    {
    }

    void performDuty()
    {
        cout <<  "Nurse is assisting patients." << endl;
    }
};

class Receptionist : public HospitalStaff
{
public:
    Receptionist(string name) : HospitalStaff(name)
    {
    }

    void performDuty()
    {
        cout << "Receptionist is managing appointments." << endl;
    }
};

int main()
{
    Doctor d("Dr. Ali");
    Nurse n("Sara");
    Receptionist r("Ahmed");

    d.performDuty();
    n.performDuty();
    r.performDuty();

    return 0;
}
