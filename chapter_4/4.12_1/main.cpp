


#include <iostream>


int main() {

    std::cout << "Enter a single character: ";

    char ch{};

    std::cin.get(ch);

    std::cout << "You entered '" << ch << "', which has ASCII code " << static_cast<int>(ch) << ".\n";
    return 0;

}