#include "iter.hpp"

void printInt(int& i)
{
    std::cout << i << std::endl;
}

void printChar(char& c)
{
    std::cout << c << std::endl;
}

void printString(std::string& s)
{
    std::cout << s << std::endl;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    iter(intArray, 5, printInt);
    std::cout << "----------------" << std::endl;
    iter(charArray, 5, printChar);
    std::cout << "----------------" << std::endl;
    iter(stringArray, 5, printString);
    return 0;
}