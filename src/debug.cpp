#include <iostream>
#include "bmp/bmp.h"

int main(int argc, char** argv)
{
    {
        BMP image("input/example.bmp");

        for (int i = 0; i < image.get_height(); i++)
        {
            for (int j = 0; j < image.get_width(); j++)
                std::cout << (int) image.get_pixel(i, j).color().r << " ";
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    {
        BMP image("input/example-simple.bmp");

        for (int i = 0; i < image.get_height(); i++)
        {
            for (int j = 0; j < image.get_width(); j++)
                std::cout << (int) image.get_pixel(i, j).color().r << " ";
            std::cout << std::endl;
        }
    }
    return 0;
}
