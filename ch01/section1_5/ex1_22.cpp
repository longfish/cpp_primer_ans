#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, sum;

    if (std::cin >> book)
    {
        sum = book;
        while (std::cin >> book)
            sum += book;
    }
    std::cout << sum << std::endl;

    return 0;
}