#include <stdio.h>

char *message [];
char symbol;
int main() {
    printf("Please, enter your line\n");
    scanf("%s", &message);
    printf("There is your line: %s\n", message);
    printf("Now enter your symbol\n");
    scanf("%s", &symbol);
    printf("Here is your symbol: %c", symbol);
}
