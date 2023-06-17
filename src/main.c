#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bresenham.h"
#include "canvas.h"
#include "primitives.h"

int main(int argc, char *argv[]) {
  char *path = argv[1];
  char *colour = argv[2];
  int x0 = (int)strtol(argv[3], NULL, 10);
  int y0 = (int)strtol(argv[4], NULL, 10);
  int x1 = (int)strtol(argv[5], NULL, 10);
  int y1 = (int)strtol(argv[6], NULL, 10);

  if (strcmp(colour, "red") == 0) {
    bresenham(x0, y0, x1, y1, red);
  }

  else if (strcmp(colour, "green") == 0) {
    bresenham(x0, y0, x1, y1, green);
  }

  else if (strcmp(colour, "blue") == 0) {
    bresenham(x0, y0, x1, y1, blue);
  }

  else if (strcmp(colour, "black") == 0) {
    bresenham(x0, y0, x1, y1, black);
  }

  else if (strcmp(colour, "white") == 0) {
    bresenham(x0, y0, x1, y1, white);
  }

  else if (strcmp(colour, "lightgray") == 0) {
    bresenham(x0, y0, x1, y1, lightgray);
  }

  else {
    printf("Colour not recognized\n");
    return 0;
  }

  FILE *output = fopen(path, "w");
  print_canvas(output);
  fclose(output);

  return 0;
}
