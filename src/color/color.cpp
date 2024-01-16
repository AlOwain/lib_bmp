#include "color.h"

Color::Color() : Color(255, 255, 255) {}
Color::Color(int r, int g, int b) { set_color(r, g, b); }
Color::Color(std::string r, std::string g, std::string b) { set_color(r, g, b); }
Color::Color(uint8_t r, uint8_t g, uint8_t b) { set_color(r, g, b); }

void Color::set_color(int r, int g, int b)
{
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) exit(-1);
    set_color({static_cast<uint8_t>(r), static_cast<uint8_t>(g), static_cast<uint8_t>(b)});
}

void Color::set_color(std::string r, std::string g, std::string b)
{
    set_color({str_to_u8(r), str_to_u8(g), str_to_u8(b)});
}

void Color::set_color(uint8_t r, uint8_t g, uint8_t b) { set_color({r, g, b}); }
void Color::set_color(RGB color) { this->color = color; }

Color::RGB Color::get_color() { return { color.r, color.g, color.b }; }

bool Color::operator==(Color right_color)
{
    RGB left = this->get_color(), right = right_color.get_color();
    return  left.r == right.r &&
            left.g == right.g &&
            left.b == right.b;
}

uint8_t str_to_u8(std::string str)
{
    unsigned long len = str.length();
    if (len > 3) return 0;

    const char *charStr = str.c_str();
    int16_t digit_place = 1, value = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (charStr[i] < 48 || charStr[i] > 57) return 0;
        value += ((int) charStr[i] - 48)  * digit_place;
        digit_place *= 10;
    }

    return value;
}
