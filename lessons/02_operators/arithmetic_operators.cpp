#include <iostream>

int main()
{
    constexpr int starting_balance = 500;
    constexpr int withdrawal = 150;
    constexpr int months = 6;
    constexpr int people = 3;

    std::cout << "Bank: Cave Vault Finance\n";
    std::cout << "Start: $" << starting_balance << '\n';
    std::cout << "Withdraw " << withdrawal << ": $" << starting_balance - withdrawal << '\n';
    std::cout << months << " Months Save: $" << starting_balance * months << '\n';
    // Integer division discards the fractional part; % gives the remainder.
    std::cout << "Share (" << people << "): $" << starting_balance / people << '\n';
    std::cout << "Leftover: $" << starting_balance % people << '\n';

    return 0;
}
