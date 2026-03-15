#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <string>
#include <limits>
#include <cstdio>
#include <iomanip>
#include <cmath>

template <typename T>
void print(const T &a)
{
    std::cout << a << std::endl;
}

template <typename T>
void iter(T *array, int length, void (*f)(T &))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(array[i]);
        i++;
    }
}

template <typename T>
void iter(const T *array, const int length, void (*f)(const  T &))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(array[i]);
        i++;
    }
}

#endif