#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int number = 25;
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    char name[] = "Farhan";

    std::cout << "Hello World!" << " " << "C++ is awesome" << std::endl;
    std::cout << "The number is " << number << std::endl;
    std::cout << "The first number is " << numbers[0] << std::endl;
    std::cout << "My name is " << name << std::endl;

    for (int i = 0; i < 10; i++) {
        if (numbers[i] == 5) {
            std::cout << numbers[i] << std::endl;

            break;
        }
    }

    for (auto num : numbers) {
        if (num == 7) {
            std::cout << num << std::endl;

            break;
        }
    }

    std::cout << "The sum is " << add(8, 2) << std::endl;

    return 0;
}
