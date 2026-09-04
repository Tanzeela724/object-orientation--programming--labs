#include <iostream>
using namespace std;

class Voter {
public:
    string name;
    int age;

    bool isEligible(); 
};

bool Voter::isEligible() {
    if (age > 18) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Voter v1;   

    cout << "Enter voter name: ";
    cin >> v1.name;

    cout << "Enter voter age: ";
    cin >> v1.age;

    if (v1.isEligible()) {
        cout << "The voter is eligible to vote." << endl;
    } else {
        cout << "The voter is not eligible to vote." << endl;
    }

    return 0;
}
