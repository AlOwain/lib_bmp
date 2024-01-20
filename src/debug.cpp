#include <iostream>
#include "../headers/bmp.h"

int main(int argc, char** argv)
{
    BMP image("input/test.bmp");

    Color x = {100, 100, 100};
    std::cout << x << std::endl;
    x = {0, 0, 0};
    std::cout << x << std::endl;
    return 0;
}
