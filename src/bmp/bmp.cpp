#include "../../headers/bmp.h"

BMP::BMP(const char *filepath)
{
    read(filepath);
}

Color BMP::pixel(int x, int y)
{
    if (x < height() && y < width()) return data[x][y];
    exit(-1);
}

int BMP::height() { return m_height; }
int BMP::width() { return m_width; }
