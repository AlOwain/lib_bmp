#include <iostream>
#include "../headers/bmp.h"

int main(int argc, char** argv)
{
    BMP image("input/test.bmp");

    Color x = {100, 100, 100};
    Color y = {0, 0, 0};
    std::cout << x << " | " << y << std::endl;
    std::cout << (x == y) << std::endl;
    x = {0, 0, 0};
    std::cout << x << " | " << y << std::endl;
    std::cout << (x == y) << std::endl;
    return 0;
}
