#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
using namespace std;

class Calculator {
private:
    float num1;
    float num2;

public:
    // Function to set values
    void setValues(float a, float b);

    // Member function declarations
    float add();
    float subtract();
    float multiply();
    float divide();
};

// Function Definitions Outside the Class

void Calculator::setValues(float a, float b) {
    num1 = a;
    num2 = b;
}

float Calculator::add() {
    return num1 + num2;
}

float Calculator::subtract() {
    return num1 - num2;
}

float Calculator::multiply() {
    return num1 * num2;
}

float Calculator::divide() {
    if (num2 != 0)
        return num1 / num2;
    else {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
}
#endif

