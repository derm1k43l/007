#include "Array.hpp"

int main() 
{
    try 
    {
        Array<int> eArray(0);
        std::cout << "Array<int>(0) created: size = " << eArray.size() << std::endl;
        std::cout << "-----------------------" << std::endl;
        try // try to print the first element of an empty array
        {
            std::cout << eArray[0] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        

        Array<int> intArray(5);
        std::cout << "Array<int>(5) created: size = " << intArray.size() << std::endl;
        for (size_t i = 0; i < intArray.size(); i++) 
        {
            intArray[i] = i;
        }
        std::cout << "Array<int>(5) contents:" << std::endl;

        for (size_t i = 0; i < intArray.size(); i++) 
        {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // deep copy
        Array<int> copyIntArray(intArray);
        std::cout << "Copied Array<int> contents:" << std::endl;
        for (size_t i = 0; i < copyIntArray.size(); i++) 
        {
            std::cout << copyIntArray[i] << " ";
        }
        std::cout << std::endl;



        // Exception test
        std::cout << "Accessing out-of-range index:" << std::endl;
        std::cout << intArray[10] << std::endl; // This will throw
    } 
    catch (std::exception& e) 
    {
        std::cerr << e.what() << " : Out of range!" << std::endl;
    }

    return 0;
}