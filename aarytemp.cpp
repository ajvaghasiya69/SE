#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = { 5, 3, 9, 1, 7 };
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    double doubleArray[] = { 3.14, 1.1, 7.2, 2.5, 5.8 };
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    char charArray[] = { 'z', 'x', 'a', 'b', 'c' };
    int charSize = sizeof(charArray) / sizeof(charArray[0]);

    cout << "Before sorting:" << endl;
    cout << "Integer array: ";
    displayArray(intArray, intSize);
    cout << "Double array: ";
    displayArray(doubleArray, doubleSize);
    cout << "Character array: ";
    displayArray(charArray, charSize);

    sortArray(intArray, intSize);
    sortArray(doubleArray, doubleSize);
    sortArray(charArray, charSize);

    cout << "After sorting:" << endl;
    cout << "Integer array: ";
    displayArray(intArray, intSize);
    cout << "Double array: ";
    displayArray(doubleArray, doubleSize);
    cout << "Character array: ";
    displayArray(charArray, charSize);

   
}

