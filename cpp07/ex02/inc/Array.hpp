#pragma once
#include <iostream>
#include <string>
#include <exception> 

template <typename T>
class Array
{
    public:
        //constructor
        Array();
        // constructor with size
        Array(size_t size);
        // copy constructor
        Array(const Array& other); // do i need Array<T>& herE?
        // destructor
        ~Array();
        // assignment operator
        Array& operator=(const Array& other);

        // subscript operator (basicly let you use "[]" to access the array)
        // non-const and const versions
        T& operator[](size_t index);
        const T& operator[](size_t index) const;

        // size
        size_t size() const;

    private:
        T*      data_;
        size_t  size_;
};

// include implementation file , after the class definition
#include "Array.tpp"