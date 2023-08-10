#include<iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

   int subtract(int a, int b)
    {
        return a - b;
    }

   

    int multiply(int a, int b)
    {
        return a * b;
    }

   int divide(int a, int b)
    {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

};

int main()
{
    Calculator calc;
     int sum = calc.add(5, 3);
    cout << "Sum of 5 and 3 : " << sum << endl;

    int diff = calc.subtract(8, 4);
    cout << "Difference of 8 and 4: " << diff << endl;

   
    int prod = calc.multiply(6, 4);
    cout << "Product of 6 and 4 : " << prod << endl;

   int quotient = calc.divide(10, 3);
    cout << "Quotient of 10 divided by 3 : " << quotient << endl;

}

