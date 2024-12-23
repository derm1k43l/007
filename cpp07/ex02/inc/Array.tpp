#include "Array.hpp"

template <typename T>
Array<T>::Array() : data_(nullptr), size_(0) {}

template <typename T>
Array<T>::Array(size_t size) : data_(new T[size]), size_(size) {}

template <typename T>
Array<T>::Array(const Array& other) : data_(new T[other.size_]), size_(other.size_) 
{
    for (size_t i = 0; i < size_; i++) 
    {
        data_[i] = other.data_[i];
    }
}

template <typename T>
Array<T>::~Array() 
{
    delete[] data_;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) 
{
    if (this != &other) 
    {
        delete[] data_;
        size_ = other.size_;
        data_ = new T[size_];
        for (size_t i = 0; i < size_; i++) 
        {
            data_[i] = other.data_[i];
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](size_t index) 
{
    if (index >= size_) 
    {
        throw std::exception();
    }
    return data_[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const 
{
    if (index >= size_) 
    {
        throw std::exception();
    }
    return data_[index];
}

template <typename T>
size_t Array<T>::size() const 
{
    return size_;
}