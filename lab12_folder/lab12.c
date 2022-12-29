#include <stdio.h>
int main(){
    FILE* file = fopen("SoD_toxicity.txt", "r");
    char line[256];
    int line_number = 0;
    while (fgets(line, sizeof(line), file) != NULL) 
    {
        line_number++;
        if (line_number % 2 == 0) 
        {
            printf("%s", line);
        }
    }
    fclose(file);
    return 0;
}
