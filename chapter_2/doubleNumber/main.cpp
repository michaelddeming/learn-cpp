

#include <iostream>

int doubleNumber(int num) {

    return (num * 2);
}

int getNumber() {

    std::cout << "Enter a number: ";
    int num {};
    std::cin >> num;
    return num;
}

int main() {

    std::cout << doubleNumber(getNumber()) << "\n";
    return 0;
}