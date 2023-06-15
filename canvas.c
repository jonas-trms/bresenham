#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "canvas.h"

int min(int x, int y) {
  if (x < y)
    return x;
  else
    return y;
}

int max(int x, int y) {
  if (x > y)
    return x;
  else
    return y;
}

// colours
rgb red = {255, 0, 0};
rgb green = {0, 255, 0};
rgb blue = {0, 0, 255};
rgb black = {0, 0, 0};
rgb white = {255, 255, 255};
rgb lightgray = {150, 150, 150};

// edit canvas
void put_pixel(int x, int y, rgb c) {
  int i = HEIGHT - 1 - y;
  int j = x;
  if (i < 0 || i >= HEIGHT || j < 0 || j > WIDTH)
    return;
  for (int k = 0; k < 3; k++) {
    canvas[i][j][k] = c[k];
  }
}

// file creation
void print_canvas(FILE *output) {
  fprintf(output, "P3\n");
  fprintf(output, "%d %d\n", WIDTH, HEIGHT);
  fprintf(output, "255\n");
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      for (int k = 0; k < 3; k++) {
        fprintf(output, "%d ", canvas[i][j][k]);
      }
      fprintf(output, "\n");
    }
  }
}