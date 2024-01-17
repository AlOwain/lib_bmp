#include "color.h"

Color::Color() : Color(255, 255, 255) {}
Color::Color(int r, int g, int b) { set(r, g, b); }
Color::Color(std::string r, std::string g, std::string b) { set(r, g, b); }
Color::Color(uint8_t r, uint8_t g, uint8_t b) { set(r, g, b); }

void Color::set(int r, int g, int b)
{
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) exit(-1);
    set({static_cast<uint8_t>(r), static_cast<uint8_t>(g), static_cast<uint8_t>(b)});
}

void Color::set(std::string r, std::string g, std::string b)
{
    set({str_to_u8(r), str_to_u8(g), str_to_u8(b)});
}

void Color::set(uint8_t r, uint8_t g, uint8_t b) { set({r, g, b}); }
void Color::set(RGB color) { m_color = color; }

Color::RGB Color::color() { return { m_color.r, m_color.g, m_color.b }; }

void Color::operator==(Color right)
{
    set(right.color().r, right.color().g, right.color().b);
}

std::ostream& operator<<(std::ostream &stream, Color color)
{
    return stream << std::hex << (int) color.color().r << " "
                << std::hex << (int) color.color().g << " "
                << std::hex << (int) color.color().b;
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
        digit_place *= 10; }

    return value;
}
