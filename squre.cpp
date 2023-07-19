#include <iostream>
using namespace std;

const double PI = 3.14159265359;


double calculateArea(double radius) {
    return PI * radius * radius;
}


double calculateArea(double length, double width) {
    return length * width;
}


double calculateAre(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, width, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << calculateArea(length, width) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << calculateAre(base, height) << endl;

    
}

