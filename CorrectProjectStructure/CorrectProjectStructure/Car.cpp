#include <iostream>
#include "Car.h"
void Car::displayInfo() {
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Model: " << model << std::endl;
	std::cout << "Year: " << year << std::endl;
}
// Constructor: A special method called when an object is created.
Car::Car(std::string brand, std::string model, int year) {
	this->brand = brand;
	this->model = model;
	this->year = year;
}