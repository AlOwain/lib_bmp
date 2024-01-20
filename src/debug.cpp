#include <iostream>
#include "../headers/bmp.h"

int main(int argc, char** argv)
{
    BMP image("input/test.bmp");

    std::cout << image.pixel(210, 324) << " "
            << image.pixel(210, 325) << " "
            << image.pixel(210, 326) << std::endl;
    std::cout << image.pixel(211, 325) << std::endl;
    return 0;
}
