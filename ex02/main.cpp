#include <iostream>
#include "Array.hpp"

int main()
{
    std::cout << "----- Constructor Test -----\n";
    Array<int> arr(5);

    for (int i = 0; i < 5; i++)
        arr[i] = i * 10;

    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    std::cout << "\n----- Copy Constructor Test -----\n";
    Array<int> copy(arr);

    for (int i = 0; i < 5; i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;

    std::cout << "\n----- Assignment Operator Test -----\n";
    Array<int> assign;
    assign = arr;

    for (int i = 0; i < 5; i++)
        std::cout << assign[i] << " ";
    std::cout << std::endl;

    std::cout << "\n----- Deep Copy Test -----\n";
    copy[0] = 999;

    std::cout << "copy[0] = " << copy[0] << std::endl;
    std::cout << "arr[0]  = " << arr[0] << std::endl;

    std::cout << "\n----- Out of Bounds Test -----\n";
    try
    {
        arr[10] = 5;
    }
    catch(const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- Size Test -----\n";
    std::cout << "size = " << arr.size() << std::endl;

    return 0;
}