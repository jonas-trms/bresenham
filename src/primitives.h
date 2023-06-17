#ifndef PRIMITIVES
#define PRIMITIVES

#include "canvas.h"

void draw_h_line(int y, int x0, int x1, rgb c);
void draw_v_line(int x, int y0, int y1, rgb c);
void draw_line(int x0, int y0, int x1, int y1, rgb c);

#endif