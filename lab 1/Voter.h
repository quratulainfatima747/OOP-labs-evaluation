#ifndef VOTER_H
#define VOTER_H
#include <iostream>
using namespace std;

class Voter {
private:
    string name;
    int age;

public:
    // Constructor
    Voter(string n, int a);

    // Member function declaration
    bool isEligible();

    // Getter for name (to display message)
    string getName();
};

// Constructor definition outside class
Voter::Voter(string n, int a) {
    name = n;
    age = a;
}

// isEligible() definition outside class
bool Voter::isEligible() {
    if (age > 18)
        return true;
    else
        return false;
}

// Getter function definition outside class
string Voter::getName() {
    return name;
}
#endif

