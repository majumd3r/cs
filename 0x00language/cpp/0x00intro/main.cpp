#include <iostream>

// int main() {
//     int age;
//     std::cout << "Enter your age: ";
//     std::cin >> age;
//     std::cout << "You are " << age << " years old!" << '\n';
//     return 0;
// }

int add(int a, int b) {
    return a + b;
}

int main() {
    int firstValue;
    std::cout << "Enter a number: ";
    std::cin >> firstValue;
    int secondValue;
    std::cout << "Enter another number: ";
    std::cin >> secondValue;
    int result = add(firstValue, secondValue);
    std::cout << firstValue << " + " << secondValue << " = " << result << '\n';
    return 0;
}