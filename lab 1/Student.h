#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    void getData() {
        cout << "Enter student name: ";
        cin >> name;  // simple input, single word

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks: ";
        cin >> marks;

        cin.ignore(); // clear buffer
    }

    void displayData() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks      : " << marks << endl;
    }
};
#endif
