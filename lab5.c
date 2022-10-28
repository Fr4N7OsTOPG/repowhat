#include <stdio.h>
 
int main()
{
    int leng = 7;
    int arr[leng];
    int i;
    
    for (i = 0; i < leng; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < leng; i++)
        printf("%d  ", arr[i]);
    return 0;
}