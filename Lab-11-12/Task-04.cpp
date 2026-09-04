#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;

    static string companyName;

public:
    Employee(int id, string name)
    {
        employeeID = id;
        employeeName = name;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
    }

    static void displayCompanyInfo()
    {
        cout << "Shared Company Name is: " << companyName << endl;
    }
};

string Employee::companyName = "Tech solutions";

int main()
{
    Employee e1(101, "Ali");
    Employee e2(102, "Ahmed");

    e1.displayEmployee();
    e2.displayEmployee();

    Employee::displayCompanyInfo();

    return 0;
}
