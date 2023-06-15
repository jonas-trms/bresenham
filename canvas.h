#ifndef CANVAS
#define CANVAS

#define HEIGHT 1000
#define WIDTH 1000

typedef int rgb[3];

extern rgb red;
extern rgb green;
extern rgb blue;
extern rgb black;
extern rgb white;
extern rgb lightgray;

rgb canvas[HEIGHT][WIDTH];

int min(int x, int y);
int max(int x, int y);
void put_pixel(int x, int y, rgb c);
void print_canvas(FILE *output);

#endif