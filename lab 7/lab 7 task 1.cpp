#include <iostream>
using namespace std;


class Display {
public:
    double lastResult;

public:
    Display() : lastResult(0.0) {}

    void showResult(double result) {
        lastResult = result;
        cout << "Displaying Result: " << lastResult << endl;
    }

    void showLastResult() {
        cout << "Last stored result was: " << lastResult << endl;
    }
};


class Calculator {
private:
    
    Display screen; 

public:
    
    void add(double a, double b) {
        double sum = a + b;
        
        screen.showResult(sum);
    }

    
    void multiply(double a, double b) {
        double product = a * b;
      
        screen.showResult(product);
    }

    
    void checkHistory() {
        screen.showLastResult();
    }
};

int main() {
    Calculator myCalc;

    cout << "Calculator Operations " << endl;
    
    myCalc.add(15.5, 10.25);      
    myCalc.multiply(4.0, 5.0);    
    
    cout << "\nChecking Memory " << endl;
    myCalc.checkHistory();        

    return 0;
}
