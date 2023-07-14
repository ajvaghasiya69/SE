#include<iostream>


inline multiply(int x, int y)
{
	x*y;

}
inline int cube(int x)
{ 
    x*x*x;
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
     
