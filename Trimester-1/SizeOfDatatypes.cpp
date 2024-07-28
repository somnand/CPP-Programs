/**
 * Refer this program to find out the size of most datatypes in C++.
 * 
 * Size of char: 1 byte
 * Size of unsigned char: 1 byte
 * Size of short: 2 bytes
 * Size of unsigned short: 2 bytes
 * Size of int: 4 bytes
 * Size of unsigned int: 4 bytes
 * Size of long: 4 bytes
 * Size of unsigned long: 4 bytes
 * Size of long long: 8 bytes
 * Size of unsigned long long: 8 bytes
 * Size of float: 4 bytes
 * Size of double: 8 bytes
 * Size of long double: 16 bytes
 * Size of bool: 1 byte
 * Size of wchar_t: 2 bytes
 * Size of char16_t: 2 bytes
 * Size of char32_t: 4 bytes
 */
#include <iostream>

int main() {
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte" << std::endl;
    std::cout << "Size of short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Size of unsigned short: " << sizeof(unsigned short) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of unsigned long: " << sizeof(unsigned long) << " bytes" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "Size of unsigned long long: " << sizeof(unsigned long long) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte" << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "Size of char16_t: " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "Size of char32_t: " << sizeof(char32_t) << " bytes" << std::endl;

    return 0;
}
