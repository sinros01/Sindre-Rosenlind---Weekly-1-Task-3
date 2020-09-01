#include <iostream>
#include <string>

int age;

int main() {
	std::cout << "What is your age?\n";
	std::cin >> age;
	if (age < 20) {
		std::cout << "You are young\n";
	}
	if (age > 20) {
		if (age <= 40) {
			std::cout << "You are a grown up\n";
		}
		if (age >= 60) {
			std::cout << "You ARE really old\n";
		}
		else {
			std::cout << "You are old\n";
		}
	}
}