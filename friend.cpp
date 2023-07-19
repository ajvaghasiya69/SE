#include <iostream>
using namespace std;

class Number {
public:
    int value;

public:
    Number(int num) {
        value = num;
    }

    void display() {
        cout << "Number: " << value << endl;
    }

    friend void swapNumbers(Number& num1, Number& num2);
};


void swapNumbers(Number& num1, Number& num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    int num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    Number number1(num1);
    Number number2(num2);

    cout << "Before swapping:" << endl;
    number1.display();
    number2.display();

    swapNumbers(number1, number2);

    cout << "After swapping:" << endl;
    number1.display();
    number2.display();

    
}

