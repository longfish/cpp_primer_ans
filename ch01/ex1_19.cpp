#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    if (v1 < v2)
    {
        while (v2 >= v1)
            std::cout << v1++ << std::endl; // substract 1 from val
    }
    else
        std::cout << "The first number should be less than the second one!" << std::endl;

    return 0;
}