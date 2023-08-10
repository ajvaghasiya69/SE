#include <iostream>
#include <vector>

class Matrix {
public:
    std::vector<int> data;
    int size;

public:
    Matrix(int n) : size(n) {
        data.resize(size);
    }

    int& operator[](int index) {
        return data[index];
    }

    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            throw std::runtime_error("Matrix sizes are not compatible for addition.");
        }

        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result[i] = data[i] + other.data[i];
        }

        return result;
    }
};

int main() {
    int n;
    std::cout << "Enter the size of the matrices: ";
    std::cin >> n;

    Matrix matrix1(n);
    Matrix matrix2(n);

    std::cout << "Enter the elements of matrix1: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> matrix1[i];
    }

    std::cout << "Enter the elements of matrix2: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> matrix2[i];
    }

    Matrix sum = matrix1 + matrix2;

    std::cout << "Sum of the matrices:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << sum[i] << " ";
    }
    std::cout << std::endl;

   
}

