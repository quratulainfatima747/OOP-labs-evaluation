#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <iostream>
using namespace std;

class Temperature {
public:
    // Public data member
    float celsius;

    // Function to convert Celsius to Fahrenheit
    float convert() {
        return (celsius * 9.0 / 5.0) + 32;
    }

    // Function to display the converted value
    void display() {
        float fahrenheit = convert();
        cout << "Temperature in Celsius: " << celsius << "°C" << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    }
};
#endif

