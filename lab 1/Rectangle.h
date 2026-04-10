#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Function declarations
    void setDimensions();
    int area();
    int perimeter();
};

// Function definitions (outside the class)

// Set dimensions
void Rectangle::setDimensions() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

// Calculate area
int Rectangle::area() {
    return length * width;
}

// Calculate perimeter
int Rectangle::perimeter() {
    return 2 * (length + width);
}
#endif


