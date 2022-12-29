#include "lab11.h"
#include <math.h>

double TRIANG_area(Tria* s) {
    return 0.5 * abs((s->p1.x - s->p3.x) * (s->p2.y - s->p3.y) - (s->p2.x - s->p3.x) * (s->p1.y - s->p3.y));
}

double TRIANG_perimeter(Tria* s) {
    double side1 = sqrt(pow(s->p2.x - s->p1.x, 2) + pow(s->p2.y - s->p1.y, 2));
    double side2 = sqrt(pow(s->p2.x - s->p3.x, 2) + pow(s->p2.y - s->p3.y, 2));
    double side3 = sqrt(pow(s->p3.x - s->p1.x, 2) + pow(s->p3.y - s->p1.y, 2));
    return side1 + side2 + side3;
}

int lab11(){
    Tria s;
    printf("Enter x and y coordinates for point 1: ");
    scanf("%d %d", &s.p1.x, &s.p1.y);
    printf("Enter x and y coordinates for point 2: ");
    scanf("%d %d", &s.p2.x, &s.p2.y);
    printf("Enter x and y coordinates for point 3: ");
    scanf("%d %d", &s.p3.x, &s.p3.y);

    double area = TRIANG_area(&s);
    double perimeter = TRIANG_perimeter(&s);
    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);
}
