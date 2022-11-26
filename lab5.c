#include <stdio.h>
#include <math.h>

 
int main()
{
    int leng = 7;
    int arr[leng];
    int i, j;
    for (i = 0; i < leng; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < ceil(leng / 2.0) ; i++)
        printf("%d  ", arr[i]);
        printf("\n");
    for (i = ceil(leng / 2.0); i < leng ; i++)
        printf("%d  ", arr[i]);
        printf("\n");
        
    int arr1[2][2] = {2, 5, 2, 2};
    int arr2[2][2] = {1, 2, 0, 1};
    int arrab[2][2] = {
    arr1[0][0] * arr2[0][0] + arr1[0][1] * arr2[1][0],
    arr1[0][0] * arr2[0][1] + arr1[0][1] * arr2[1][1], 
    arr1[1][0] * arr2[0][0] + arr1[1][1] * arr2[1][0],
    arr1[1][0] * arr2[0][1] + arr1[1][1] * arr2[1][1]
    };
    
    for (j = 0; j < 2 ; j++)
        printf("%d  ", arrab[0][j]);
        printf("\n");
    
    for (j = 0; j < 2 ; j++)
        printf("%d  ", arrab[1][j]);
        
    return 0;
}
