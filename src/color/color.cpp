#include "color.h"

Color::Color() : Color(255, 255, 255) {}
Color::Color(int r, int g, int b) { set_color(r, g, b); }
Color::Color(std::string r, std::string g, std::string b) { set_color(r, g, b); }
Color::Color(uint8_t r, uint8_t g, uint8_t b) { set_color(r, g, b); }

void Color::set_color(int r, int g, int b)
{
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) exit(-1);
    set_color(static_cast<uint8_t>(r), static_cast<uint8_t>(g), static_cast<uint8_t>(b));
}

#include <iostream>
void Color::set_color(std::string r, std::string g, std::string b)
{
    /* Handle errors */
    // if (!(str_to_u8(r) && str_to_u8(g) && str_to_u8(b))) exit(-1);
    std::cout   << str_to_u8("sdaflk0") << ", "
                << str_to_u8("31") << ", "
                << str_to_u8("0") << ", "
                << str_to_u8("-0") << ", "
                << str_to_u8("-120") << ", "
                << str_to_u8("230") << ", "
                << str_to_u8("100000") << ", "
                << str_to_u8("10");
    // set_color();
}

void Color::set_color(uint8_t r, uint8_t g, uint8_t b)
{
    this->r = r;
    this->g = g;
    this->b = b;
}

int16_t str_to_u8(std::string str)
{
    unsigned long len = str.length();
    if (str.length() > 3) return -1;

    int16_t value;
    for (int i = 0; i < len; i++)
    {
        if (str.c_str()[i] < 48 || str.c_str()[i] > 57) return -1;

        value += (str.c_str()[i] - 48) + (10 * i);
    }
    return value;
}
