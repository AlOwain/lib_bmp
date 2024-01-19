#include <iostream>
#include "bmp/bmp.h"

int main(int argc, char** argv)
{
    {
        Color x((Color){0, 2, 0});
        std::cout << x << std::endl;
    }

    std::cout << std::endl;
    {
        BMP image("input/example.bmp");

        for (int i = 0; i < image.height(); i++)
        {
            for (int j = 0; j < image.width(); j++)
                std::cout << image.pixel(i, j) << " ";
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    {
        BMP image("input/example-simple.bmp");

        for (int i = 0; i < image.height(); i++)
        {
            for (int j = 0; j < image.width(); j++)
                std::cout << image.pixel(i, j) << " ";
            std::cout << std::endl;
        }
    }
    return 0;
}
