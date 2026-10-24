

#include <iostream>

int main() {

    int first{}, second{};

    std::cout << "Enter an integer: ";
    std::cin >> first;
    std::cout << "Enter another integer: ";
    std::cin >> second;

    std::cout << first << " + " << second << " is " << (first + second) << ".\n";
    std::cout << first << " - " << second << " is " << (first - second) << ".\n";
    
    return 0;
}