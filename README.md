# An implementation of Bresenham's algorithm
This algorithm draws a line between the points (x0, y0) and (x1, y1), and exports an image of it. 

It's possible to choose the colour of the line among these ones : red, green, blue, black, white, lightgray.

The canvas, and the generated image, have a size of 1000 × 1000 pixels. Coordinates are integers.

# Compilation
You can compile with GCC by running the following command:

```
$ gcc -o bresenham main.c bresenham.c canvas.c primitives.c -lm
```

# Execution
Output image is in PPM format.

Arguments : output path, colour, x0, y0, x1, y1.

# Example
```
$ ./bresenham bresenham.ppm red 250 250 900 800
```

![The line was drawn between (250, 250) and (900, 800)](https://i.imgur.com/8YABLtI.png) \
The line was drawn between (250, 250) and (900, 800)
