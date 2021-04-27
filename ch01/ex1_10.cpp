#include <iostream>

int main()
{
    int val = 10;

    // keep executing the while as long as val is larger than or equal to 0
    while (val >= 0)
        std::cout << val-- << std::endl; // substract 1 from val

    return 0;
}