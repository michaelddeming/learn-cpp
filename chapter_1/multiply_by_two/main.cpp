



#include <iostream>


int main() {

    std::cout << "Enter a number: ";

    int num {};

    std::cin >> num;

    std::cout << "Double " << num << " is: " << (num * 2) << '\n';

    std::cout << "Triple " << num << " is: " << (num * 3) << '\n';
    
    return 0;

}