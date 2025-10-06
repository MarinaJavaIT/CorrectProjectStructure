#include "User.h"
// Member functions (methods)
void User::displayUserInfo() const {
	std::cout << "Username: " << username << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Age: " << age << std::endl;
}

void User::setAge(int newAge) {
	if (newAge > 0) { // Basic validation
		age = newAge;
	}
	else {
		std::cout << "Invalid age provided." << std::endl;
	}
}
