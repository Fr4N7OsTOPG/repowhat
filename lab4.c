#include <stdio.h>

long inRange(int l, int r, int num) {
    long a = (r - num) & 2147483648;
    long b = (num - l) & 2147483648;
    return a+b;
}
int main(){
    int left;
    int right;
    int x;
    scanf("%d %d %d", &left, &right, &x);
    printf("%ld \n", inRange(left, right, x));
    int mask;
    mask = 64;
    int check;
    check = x & mask;
    
    if (check == 0) {
        printf("No bit");
        
    } else {
       
        printf("Yes, bit was found");
    }
    
}
