#include <iostream>

int main()
{
    std::cout << "Bank: Cave Vault Finance\n";

    std::cout << "Start: $" << 500 << std::endl;
    std::cout << "Withdraw 150: $" << 500 - 150 << std::endl; // Subtraction
    std::cout << "6 Months Save: $" << 500 * 6 << std::endl; // Multiplication
    std::cout << "Share (3): $" << 500 / 3 << std::endl;    // Division
    std::cout << "Leftover: $" << 500 % 3 << std::endl;    // Remainder
}