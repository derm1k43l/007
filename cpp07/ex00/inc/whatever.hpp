#pragma once

template <typename T>
void swap(T& one, T& two)
{
    T temp = one;
    one = two;
    two = temp;
}

template <typename T>
T min(const T& one, const T& two)
{
    return (one < two ? one : two);
}

template <typename T>
T max(const T& one, const T& two)
{
    return (one > two ? one : two);
}