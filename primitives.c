#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "primitives.h"

// simples primitives
void draw_h_line(int y, int x0, int x1, rgb c) {
  int inf = min(x0, x1);
  int sup = max(x0, x1);
  for (int i = inf; i <= sup; i++) {
    put_pixel(i, y, c);
  }
}

void draw_v_line(int x, int y0, int y1, rgb c) {
  int inf = min(y0, y1);
  int sup = max(y0, y1);
  for (int i = inf; i <= sup; i++) {
    put_pixel(x, i, c);
  }
}

// lines
void draw_line(int x0, int y0, int x1, int y1, rgb c) {
  if (x1 == x0) {
    draw_v_line(x0, y0, y1, c);
  } else if (y0 == y1) {
    draw_h_line(y0, x0, x1, c);
  } else if (x0 > x1) {
    draw_line(x1, y1, x0, y0, c);
  }

  else {
    double pente = (double)(y1 - y0) / (double)(x1 - x0);

    if (-1.0 <= pente && pente <= 1.0) {
      for (int x = x0; x <= x1; x++) {
        int y = round(y0 + pente * (x - x0));
        put_pixel(x, y, c);
      }
    }

    else if (pente > 1.0) {
      for (int y = y0; y <= y1; y++) {
        int x = round((y - y0) / pente + x0);
        put_pixel(x, y, c);
      }
    }

    else if (pente < -1.0) {
      for (int y = y1; y <= y0; y++) {
        int x = round((y - y1) / pente + x1);
        put_pixel(x, y, c);
      }
    }
  }
}