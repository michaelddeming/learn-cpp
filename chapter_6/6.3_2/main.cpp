

#include <iostream>

constexpr bool isEven(int num) {

    return (num % 2) == 0;
}

int main() {

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (isEven(x)) 
        std::cout << x << " is even\n";
    else 
        std::cout << x << " is odd\n";

    return 0;
}  