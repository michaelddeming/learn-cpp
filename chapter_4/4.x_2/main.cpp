
#include <iostream>


int main() {

    double first{}, second{};
    char symbol{};

    std::cout << "Enter a double value: ";
    std::cin >> first; 
    
    std::cout << "Enter a double value: ";
    std::cin >> second; 

    std::cout << "Enter +, -, *, /: ";
    std::cin >> symbol; 

    double res {};
    if (symbol == '+') {
        res = first + second;
    }
    else if (symbol == '-') {
        res = first - second;
    }
    else if (symbol == '*') {
        res = first * second;
    }
    else if (symbol == '/') {
        // prevent 0 division
        if (second == 0) {
            return 1;
        }
        res = first / second;
    }
    else return 1;
    
    std::cout << first << " " << symbol << " " << second << " is " << res << "\n";
    return 0;
}