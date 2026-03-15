#include "Iter.hpp"

int main()
{
    int arrInt[5] = {1, 2, 3, 4, 5};
    std::string arrStr[3] = {"abdo", "hamid", "3ichaa"};

    std::cout << "Int array:" << std::endl;
    iter(arrInt, 5, print);

    std::cout << "String array:" << std::endl;
    iter(arrStr, 3, print);

    return (0);
}