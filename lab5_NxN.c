#include <stdio.h>

int main()
{
    int i, j, d, f;
    int N; 
    printf("What is the N of the matrix A and B?\n");
    scanf("%d", &N);
    int A[N][N];
    int B[N][N];
    int C[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n");
    
    for (d = 0; d < N; d++)
    {
        for (f = 0; f < N; f++)
        {
            printf("B[%d][%d] = ", d, f);
            scanf("%d", &B[d][f]);
        }
    }
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for(int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }    
    }
    
    printf("matrix A\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    
    printf("\nmatrix B\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    
    printf("\nthe result of multiplying\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }    
    return 0;
}
