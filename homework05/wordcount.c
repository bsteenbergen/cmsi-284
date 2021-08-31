#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main () {
    char *filename;
    printf("Enter the file name: "); 
    scanf("%s", filename);

    FILE *file = fopen( filename, "r" );

    int count = 0;
    char c;

    if (file == NULL) {
        printf("file not found, move into working directory");
    }
    while ((c = fgetc(file)) != EOF) {
        if (isspace(c)) {
            count++;
        }
    }
    fclose(file);
    printf("Words in the file: %d", count);
    return 0;
}