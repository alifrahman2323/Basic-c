#include <iostream>

int main() {
    // Declare a variable to store user input
    int number;

    // Get input from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Print the multiplication table up to 10
    std::cout << "Multiplication Table for " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << (number * i) << "\n";
    }

    return 0;
}

