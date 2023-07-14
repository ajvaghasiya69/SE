#include <iostream>

class Calculator {
public:
    float num1;
    float num2;

public:
    Calculator(float number1, float number2) {
        num1 = number1;
        num2 = number2;
    }

     float addition() {
        return num1 + num2;
    }

    float subtraction() {
        return num1 - num2;
    }

    float division() {
       
            return num1 / num2;
        
        }
    

    float multiplication() {
        return num1 * num2;
    }
};

int main() {
    float number1, number2;

    std::cout << "Enter two numbers: ";
    std::cin >> number1 >> number2;

    Calculator calculator(number1, number2);

    std::cout << "Addition: " << calculator.addition() << std::endl;
    std::cout << "Subtraction: " << calculator.subtraction() << std::endl;
    std::cout << "Division: " << calculator.division() << std::endl;
    std::cout << "Multiplication: " << calculator.multiplication() << std::endl;

     
}

