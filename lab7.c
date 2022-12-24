#include <stdio.h>

enum pastry{
    cake = 1,
    lil_cake = 2,
    ice_cream = 3,
    candy = 4,
};

struct square{
    float side;
};
struct Bit_field{
    unsigned char Ready:1;
    unsigned int Low_of_toner:1;
    unsigned int Drum_damage:1;
    unsigned char No_paper:1;
};

int main(){
    printf("1\n");
    printf("Choice your cheat meal:\n");
    printf("1) Dacake\n2) Little cake\n3) Ice cream\n4) Candy\n");
    printf("Your choice - ");
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("Your cheat meal today is cake\n");
            break;
        case 2:
            printf("Your cheat meal today is little\n");
            break;
        case 3:
            printf("Your cheat meal today is ice cream\n");
            break;
        case 4:
            printf("Your cheat meal today is candy\n");
            break;
    }
    printf("\n");
    
    
    printf("2\n");
    float side;
    printf("Enter side of the square ");
    scanf("%f", &side);
    struct square example = {side};
    float area = pow(side, 2);
    float volume = pow(side, 3);

    printf("Area = %.3f\n", area);
    printf("Volume of the cube, if it was = %.3f\n", volume);
    printf("\n");

    printf("3\n");
    unsigned n;
    scanf("%d", &n);
    struct Bit_field pb = {n, n, n, n};
    printf("Printer is ready - ");
    if (pb.Ready){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    printf("Low level of toner - ");
    if (pb.Low_of_toner){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    printf("Is drum damaged - ");
    if (pb.Drum_damage){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    printf("No paper? - ");
    if (pb.No_paper){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
