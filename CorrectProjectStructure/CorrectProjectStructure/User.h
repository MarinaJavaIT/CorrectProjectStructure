#pragma once
#include <iostream>
#include <string>

class User {
private:
	std::string username;
	std::string email;
	int age;
public:
	// Constructor
	User(const std::string& uname, const std::string& mail, int a)
		: username(uname), email(mail), age(a) {
	}
	// Member functions (methods)
	void displayUserInfo() const;
	// Getter methods
	std::string getUsername() const { return username; }

	std::string getEmail() const {
		return email;
	}

	int getAge() const {
		return age;
	}

	// Setter methods
	void setUsername(const std::string& newUsername) {
		username = newUsername;
	}

	void setEmail(const std::string& newEmail) {
		email = newEmail;
	}
	void setAge(int newAge);
};