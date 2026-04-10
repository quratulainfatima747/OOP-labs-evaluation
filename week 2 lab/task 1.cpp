#include <iostream>
#include <string>
#include "Product.h"
int main() {
    Product p;

    p.setName("");       // Should print error message
    p.setPrice(-50);     // Should print error message
    p.setQuantity(-2);   // Should print error message

    p.setName("Laptop");
    p.setPrice(1200.50);
    p.setQuantity(5);

    cout << "Product: " << p.getName() << endl;
    cout << "Price: $" << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}
