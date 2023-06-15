#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "bresenham.h"

void bresenham_low(int x0, int y0, int x1, int y1, rgb c) {
  int dx = x1 - x0;
  int dy = y1 - y0;
  int y_increment = 1;

  if (dy < 0) {
    y_increment = -1;
    dy = -dy;
  }

  int err = dx - 2 * dy;
  int y = y0;

  for (int x = x0; x <= x1; x++) {
    put_pixel(x, y, c);
    if (err < 0) {
      y = y + y_increment;
      err = err + 2 * dx - 2 * dy;
    }

    else {
      err = err - 2 * dy;
    }
  }
}

void bresenham_high(int x0, int y0, int x1, int y1, rgb c) {
  int dx = x1 - x0;
  int dy = y1 - y0;
  int x_increment = 1;

  if (dx < 0) {
    x_increment = -1;
    dx = -dx;
  }

  int err = dy - 2 * dx;
  int x = x0;

  for (int y = y0; y <= y1; y++) {
    put_pixel(x, y, c);
    if (err < 0) {
      x = x + x_increment;
      err = err + 2 * dy - 2 * dx;
    } else {
      err = err - 2 * dx;
    }
  }
}

void bresenham(int x0, int y0, int x1, int y1, rgb c) {
  int dx = x1 - x0;
  int dy = y1 - y0;

  if (abs(dx) > abs(dy)) {
    if (dx >= 0)
      bresenham_low(x0, y0, x1, y1, c);
    else
      bresenham_low(x1, y1, x0, y0, c);
  }

  else {
    if (dy >= 0)
      bresenham_high(x0, y0, x1, y1, c);
    else
      bresenham_high(x1, y1, x0, y0, c);
  }
}