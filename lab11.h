#ifndef LAB11_H
#define LAB11_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point p1;
    Point p2;
    Point p3;
} Tria;

double TRIANG_area(Tria* s);
double TRIANG_perimeter(Tria* s);
int lab11();
#endif
