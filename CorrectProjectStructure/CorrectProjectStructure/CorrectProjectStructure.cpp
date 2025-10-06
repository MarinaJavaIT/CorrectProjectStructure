// CorrectProjectStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
#include "User.h"

int main() {
	// Create objects (instances) of the Car class
	Car myCar("Toyota", "Camry", 2022);
	Car anotherCar("Honda", "Civic", 2020);

	// Access attributes and call methods using the objects
	std::cout << "My Car Information:" << std::endl;
	myCar.displayInfo();

	std::cout << "\nAnother Car Information:" << std::endl;
	anotherCar.displayInfo();
	// Create User objects
	User user1("john_doe", "john.doe@example.com", 30);
	User user2("jane_smith", "jane.smith@example.com", 25);

	// Display user information
	std::cout << "User 1 Information:" << std::endl;
	user1.displayUserInfo();
	std::cout << std::endl;

	std::cout << "User 2 Information:" << std::endl;
	user2.displayUserInfo();
	std::cout << std::endl;

	// Modify user information using setter methods
	user1.setEmail("john.doe.new@example.com");
	user2.setAge(26);

	// Display updated information
	std::cout << "Updated User 1 Information:" << std::endl;
	user1.displayUserInfo();
	std::cout << std::endl;

	std::cout << "Updated User 2 Information:" << std::endl;
	user2.displayUserInfo();
	std::cout << std::endl;

	// Access individual attributes using getter methods
	std::cout << "User 1's username: " << user1.getUsername() << std::endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
