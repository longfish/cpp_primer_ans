#include <iostream>

int main()
{
    std::cout << "Enter two numbers (assume the first number is smaller):" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    // keep executing the while as long as v2 is still larger than or equal to v1
    while (v2 >= v1)
        std::cout << v1++ << std::endl; // substract 1 from val

    return 0;
}