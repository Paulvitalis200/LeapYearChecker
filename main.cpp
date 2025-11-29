#include <iostream>
#include <limits>

// Ask the user for a year and determine if it’s a leap year.

/*
 * 1. Create isLeapYear function. Takes a year as the parameter
 * 2. Ask user for input and validate that input is a number.
 * 2. Check if year is divisible by 4
 * 3. Return result
 *
 */

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int inputYear = 0;

    while (true) {
        std::cout << "Enter a year: ";

        if (!(std::cin >> inputYear)) {
            std::cout << "Kindly enter a valid year" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        break;
    }

    std::cout << std::boolalpha << isLeapYear(inputYear);
    return 0;
}