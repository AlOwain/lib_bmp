#include <iostream>
#include "bmp/bmp.h"

int main(int argc, char** argv)
{
    {
        BMP image("input/test.bmp");

        for (int i = 0; i < image.height(); i++)
        {
            for (int j = 0; j < image.width(); j++)
                std::cout << image.pixel(i, j) << " ";
            std::cout << std::endl;
        }
    }
    return 0;
}
