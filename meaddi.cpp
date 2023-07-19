#include <iostream>
#include <cstring>

class MyString {
public:
    char* str;
    int length;

public:
    MyString(const char* s = "") {
        length = std::strlen(s);
        str = new char[length + 1];
        std::strcpy(str, s);
    }

    MyString(const MyString& other) {
        length = other.length;
        str = new char[length + 1];
        std::strcpy(str, other.str);
    }

    ~MyString() {
        delete[] str;
    }

    MyString operator+(const MyString& other) {
        int newLength = length + other.length;
        char* newStr = new char[newLength + 1];

        std::strcpy(newStr, str);
        std::strcat(newStr, other.str);

        MyString result(newStr);
        delete[] newStr;

        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const MyString& myStr) {
        os << myStr.str;
        return os;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2(" World!");

    MyString result = str1 + str2;

    std::cout << "Concatenated string: " << result << std::endl;

   
}

