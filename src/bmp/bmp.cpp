#include "../../headers/bmp.h"

BMP::BMP(const char *filepath)
{
    read(filepath);
}

Color BMP::pixel(int x, int y) { return data[x][y]; }

int BMP::height() { return m_height; }
int BMP::width() { return m_width; }
