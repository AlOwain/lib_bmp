#pragma once
#include <cstdint>
#include <cstdlib>
#include <string>

class Color {
public:
    Color();
    Color(int r, int g, int b);
    Color(std::string r, std::string g, std::string b);
    Color(uint8_t r, uint8_t g, uint8_t b);

    char* to_hex();
    void set_color(int r, int g, int b);
    void set_color(std::string r, std::string g, std::string b);
    void set_color(uint8_t r, uint8_t g, uint8_t b);
private:
    uint8_t r, g, b;
};

int16_t str_to_u8(std::string str);
