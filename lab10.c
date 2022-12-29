#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void add(double **a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }    
}

float** distance(double **p, double **mass, int n) 
{
    int i, j;
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            mass[i][j] = sqrt(pow((p[i][0] - p[j][0]), 2) + pow((p[i][1] - p[j][1]), 2));
        }
    }
}

void print(double **a, int n){
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
            if (i != j)
            {
                printf("%d - %d: %lf", i+1, j+1, a[i][j]);
                printf("\n");
            }
            else
            {
                continue;
            }
        }
    }
}

int sum(int n)
{
    if (n % 10 == 0)
    {
        return 0;
    }
    else
    {
        return sum(n / 10) + (n % 10);
    }
}

int main(){
    int n;
    double **a, **res;
    printf("Enter how many dots there will be | ");
    scanf("%d", &n);
    a = (double**)malloc(sizeof(double*)*n);
    for (int i = 0; i < n; i++){
        a[i] = (double *)malloc(n*sizeof(double));
    }
    res = (double**)malloc(sizeof(double*)* n);
    for (int i = 0; i < n; i++) {
        res[i] = (double *) malloc(n * sizeof(double));
    }
    add(a,n);
    distance(a,res,n);
    print(res, n);
    int el;
    printf("Enter which number you want to sum with itself | ");
    scanf("%d", &el);
    printf("%d\n" , sum(el));
    return 0;
}
