


#include <iostream>

bool isPrime(int value) {

    return (value == 2 || value == 3 || value == 5 || value == 7 );
}

int main() {

    std::cout << "Enter a number between 0 and 9 (inclusive): ";

    int x{};
    std::cin >> x;

    if (isPrime(x)) {

        std::cout << "The digit is prime.\n";
    }
    else {
        std::cout << "The digit is not prime.\n";
    }
    return 0;
}

