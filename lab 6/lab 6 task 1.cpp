#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    string name;
    double price;

public:
    
    Product(string n, double p) : name(n), price(p) {
        cout << "Base Class (Product) Constructor called." << endl;
    }

    void displayProduct() {
        cout << "Product Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }
};


class Electronics : public Product {
public:
    int warrantyYears;

public:
    
    Electronics(string n, double p, int w) : Product(n, p), warrantyYears(w) {
        cout << "Derived Class (Electronics) Constructor called." << endl;
    }

    void display() {
        displayProduct(); 
        cout << "Warranty: " << warrantyYears << " years" << endl;
    }
};

int main() {
    
    Electronics laptop("Gaming Laptop", 1500.00, 2);

    cout << "\n--- Displaying Electronics Details ---" << endl;
    laptop.display();

    return 0;
}
