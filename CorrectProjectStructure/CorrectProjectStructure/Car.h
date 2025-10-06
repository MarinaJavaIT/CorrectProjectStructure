#pragma once
#include <string>
#include <iostream>
class Car {
public: // Access specifier: members declared here are accessible from outside the class.
    // Attributes (member variables)
    std::string brand;
    std::string model;
    int year;
    Car() :brand{""}, model{""}, year(2025) {}
    void displayInfo();
    Car(std::string brand, std::string model, int year);
};

