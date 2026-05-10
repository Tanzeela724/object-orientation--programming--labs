#include <iostream>
using namespace std;


class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

class Student {
private:
    string name;
    Calculator* sharedCalc; 

public:
   
    Student(string n, Calculator* calc) : name(n), sharedCalc(calc) {}

    void solveAddition(double x, double y) {
        if (sharedCalc) {
            double res = sharedCalc->add(x, y);
            cout << name << " solved addition using the shared calculator: " << res << endl;
        }
    }

    void solveMultiplication(double x, double y) {
        if (sharedCalc) {
            double res = sharedCalc->multiply(x, y);
            cout << name << " solved multiplication using the shared calculator: " << res << endl;
        }
    }
};

int main() {
    
    Calculator teacherCalc;

    
    Student s1("Alice", &teacherCalc);
    Student s2("Bob", &teacherCalc);

    cout << "Classroom Math Session " << endl;
    
    s1.solveAddition(10, 5);
    s2.solveMultiplication(4, 3);
    s1.solveMultiplication(7, 8);

    cout << "\nEnd of class. The calculator still exists even if students leave." << endl;

    return 0;
}
