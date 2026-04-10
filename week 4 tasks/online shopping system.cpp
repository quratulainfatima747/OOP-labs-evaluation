#include <iostream>
#include <string>
using namespace std;

// Base class
class Product {
protected:
    string name;
    double price;

public:
    // Constructor of base class
    Product(string n, double p) {
        name = n;
        price = p;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }
};

// Derived class
class Electronics : public Product {
private:
    int warrantyYears;

public:
    // Constructor chaining (calling base class constructor)
    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
    }

    void display() {
        Product::display(); // Call base class display
        cout << "Warranty (years): " << warrantyYears << endl;
    }
};

// Main function
int main() {
    Electronics e("Laptop", 1200.50, 2);

    e.display();

    return 0;
}
