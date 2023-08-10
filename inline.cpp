#include <iostream>


inline int multiply(int a, int b) {
    return a * b;
}


inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int result_multiply = multiply(num1, num2);
    int result_cube = cube(num1);

    std::cout << "Multiplication: " << result_multiply << std::endl;
    std::cout << "Cubic Value: " << result_cube << std::endl;

}

