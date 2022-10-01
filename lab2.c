#include <stdio.h>
#include <math.h>

double pi = 3.1415926535;
float z1(float num) {
    float equ1;
    equ1 = pow(cos(3*pi/8 - num/4), 2) - pow(cos(11*pi/8 + num/4), 2);
}
float z2(float num) {
    float equ2;
    equ2 = pow(2, 0.5)/2 * sin(num/2);
}
int main(){
    float alpha;
    printf("Throw me some numbers\nWhat is your angle? ");
    scanf("%f", &alpha);
    alpha = alpha*(pi/180);
    printf("z1 == %.2f\n", z1(alpha));
    printf("z2 == %.2f", z2(alpha));
}
