#include<stdio.h>
#include <malloc.h>
 
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
char sim_idencifier(char *str0, char *str01, char *narr)
{
    int i, j;
    int ni = 0;
    for (i = 0; i != stringLength(str0); i++)
    {
        for (j = 0; j != stringLength(str01); j++)
        {
            if (str0[i] = str01[j])
            {
                narr[ni] = str0[i];
                ni++;
                break;
            }
            else
            {
                continue;
            }
        }
    }

}
char lexeming(char *str0, char rs, char *nstr)
{
    int i, j, d;
    int ni = 0;
    for (i = 0; i != stringLength(str0); i++)
    {
        if (str0[i] = rs)
        {
            for (j = 0; j != i; j++)
            {
                nstr[ni] = str0[j];
                ni++;
            }
            
            for (d = i+1; d != stringLength(str0); d++)
            {
                nstr[ni] = str0[d];
                ni++;
            }
            break;
            
        }
        else 
        {
            continue;
        }
    }
}
 
int main()  
{  
    char str1[100];
    char s;
    printf("Enter your first line | ");
    scanf("%s", &str1);
    printf("Length of the line is = %d\n", stringLength(str1));
    ////
    printf("----Another task----\n");
    int length = stringLength(str1);
    printf("Enter ur searched symbol | ");
    scanf("%s", &s);
    printf("Your symbol was found at %d'th index\n", string_search(str1, s, length));
    ////
    printf("\n----Another task----\n");
    char str2[100];
    printf("Enter another line | ");
    scanf("%s", &str2);
    char strnew[100];
    sim_idencifier(str1, str2, strnew);
    printf("Here is length of crossing symbols %d", stringLength(strnew));
    ////
    printf("\n----Another task----\n");
    char nstr[100];
    char symbol;
    printf("Enter what symbol from line 2 will become separator | ");
    scanf("%s", &symbol);
    lexeming(str1, symbol, nstr);
    printf("The result is | %s", nstr);
    printf("\n----Another task----\n");
    int n;
    printf("n is ");
    scanf("%d", &n);
    int k;
    for (k = 0; k != n; k++)
    {
        str1[length + k] = str2[k];
    }
    printf("the result is %s", str1);
    ////
    
    return 0;  
}
