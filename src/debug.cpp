#include <iostream>
#include "../headers/bmp.h"

int main(int argc, char** argv)
{
    BMP image("input/example-simple.bmp");

    std::cout << image.pixel(image.height() - 1, image.width() - 1) << std::endl;
    std::cout << image.pixel(image.height(), image.width()) << std::endl;
    return 0;
}
