// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t Length1 = 25;

    char array_str1[Length1] = "Hello there! ";
    char array_str2[] = "What's up?";

    std::string std_str1 = "Hello there! ";
    std::string std_str2 = "What's up?";

    strncat(array_str1, array_str2, Length1);
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
