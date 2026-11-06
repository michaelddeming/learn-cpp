
#include <iostream>
#include <string>


std::string getName() {

    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge() {

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;
    return age;
}

int getNamePlusAge(std::string name, int age) {

    int name_len {static_cast<int>(name.length())};

    return (name_len + age);
}

int main() {

    std::string name{getName()};
    int age{getAge()};
    std::cout << "Your age + length of name is: " << getNamePlusAge(name, age) << "\n";

    return 0;
}