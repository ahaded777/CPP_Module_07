#ifndef ARRAY_HPP
#define ARRAY_HPP

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
class Array
{
    private:
        T *data;
        size_t length;
    public:
        Array()
        {
            data = NULL;
            length = 0;
        }
        Array(size_t len)
        {
            length = len;
            if (len > 0)
                data = new T[len];
            else
                data = NULL;
        }
        Array(const Array &copy)
        {
			length = copy.length;
            if (length > 0)
            {
                data = new T[length];
                size_t i = 0;
                while (i < length)
                {
                    data[i] = copy.data[i];
                    i++;
                }
            }
            else
                data = NULL;
        }
        Array &operator=(const Array &oth)
        {
            if (this != &oth)
            {
                if (data)
                    delete[] data;
                length = oth.length;
                if (length > 0)
                {
                    data = new T[length];
                    size_t i = 0;
                    while (i < length)
                    {
                        data[i] = oth.data[i];
                        i++;
                    }
                }
                else
                    data = NULL;
            }
            return (*this);
        }
        T &operator[](int index)
        {
            if (index < 0 || (size_t)index >= length)
				throw (std::out_of_range("Index out of bounds"));
			return (data[index]);
        }
        size_t size() const
        {
            return (length);
        }
        ~Array()
        {
            delete[] data;
        }
};

#endif
