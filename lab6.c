#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int mas [4] = {50, 40, 30, 20};
    int *q = mas;
    for (int i = 0; i < 4; i++)
    {
        printf ("%d\n", *(q+i));
    }
    printf ("\n");


    int *mas1 = (int *) malloc (4*sizeof(int));
    int *w = mas1;
    *(w) = 50;
    *(w+1) = 40;
    *(w+2) = 30;
    *(w+3) = 20;
    for (int i=0; i<4; i++)
    {
        printf ("%d ", *(w+i));
    }
    free (mas1); 
    return 0;
}
