#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& value1, T& value2) {
    T temp = value1;
    value1 = value2;
    value2 = temp;
};

int main() {
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
	}
