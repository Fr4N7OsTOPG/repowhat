#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int stringLength(char *str)  
{  
    int i=0;  
    while(str[i] != '\0') i++;  
    return i;  
} 

int string_search(char *str, char sym, int dlina)
{
    int i = 0;
    for (i = dlina; i != -1; i--)
    {
        if (str[i] != sym)
        {
            continue;
        }
        else 
        {
            return i;
        }
    }    
}


int main()
{
    char *str1 = malloc(10 * sizeof(char));
    char *str01 = malloc(10 * sizeof(char));
    strcpy(str1, "Hello");
    strcpy(str01, "Hello");
    char *str2 = " World!";
    int num_chars = 3;
    
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    
    int new_size = len1 + num_chars + 1;
    int i;
    for (i = 0; i < num_chars; i++) {
        str1[len1 + i] = str2[i];
    }
    str01[len1 + i] = '\0';
    printf("2'th TASK \n Concatenated string: %s\n", str1);
    printf("\n");
    
    printf("7'th TASK \n Length of first line is | %d\n", len1);
    printf("\n");
    
    printf("9'th TASK\n What symbol are you searching for | ");
    char symbol;
    scanf("%c", &symbol);
    printf("Here it is, at %d'th index\n", string_search(str1, symbol, len1));
    printf("\n")
    
    str1 = realloc(str1, new_size * sizeof(char));
    printf("11'th TASK \n Amount os crossing symbols | %ld\n", len1 - strcspn(str1, str2));
    printf("\n");
    
    printf("12'th TASK \n Length of not crossing symbols  | %ld\n",strcspn(str1, str2));
    return 0;

}
