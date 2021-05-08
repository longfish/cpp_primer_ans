#include <iostream>

int main()
{
    // ex27
    // int i = -1;
    // int i = -1, &r = 0;
    // const int i = -1, &r = 0;
    // const int *const p3 = &i2;
    // const int &const r2;
    // const int i2 = i, &r = i;

    // ex28
    // int i, *const cp;
    // const int *p;

    // ex32
    // int null = 0, *p = 0;

    int x = 3, y = 5;
    int const *p = &x;
    std::cout << *p << std::endl;
    p = &y;
    std::cout << *p << std::endl;

    return 0;
}