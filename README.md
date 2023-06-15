# An implementation of Bresenham's algorithm
This algorithm draws a line between the points `(x0, y0)` and `(x1, y1)`, and exports a `.ppm` image of it. 

## Compilation
You can compile with GCC by running the following command:

```
$ gcc -o bresenham main.c bresenham.c canvas.c primitives.c -lm
```

## Usage
The canvas, and the generated image, have a size of 1000 × 1000 pixels.

* `./main [args]` draws the line and exports the image. Arguments:
  * `output` is the path to the generated `.ppm` image.
  * `colour` is the colour of the line and must be one of these: `red`, `green`, `blue`, `black`, `white`, `lightgray`.
  * `x0` is a `int` value equal to the coordinate of the first point on the x axis. Must be comprised between 0 and 999.
  * `y0` is a `int` value equal to the coordinate of the first point on the y axis. Must be comprised between 0 and 999.
  * `x1` is a `int` value equal to the second of the first point on the x axis. Must be comprised between 0 and 999.
  * `y2` is a `int` value equal to the second of the first point on the y axis. Must be comprised between 0 and 999.

## Example
```
$ ./bresenham bresenham.ppm red 250 250 900 800
```

![The line was drawn between (250, 250) and (900, 800)](https://i.imgur.com/8YABLtI.png) \
The line was drawn between `(250, 250)` and `(900, 800)`
