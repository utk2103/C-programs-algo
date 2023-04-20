#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char ch1, ch2;
    char file1name[100], file2name[100];

    printf("Enter the name of the first file: ");
    scanf("%s", file1name);

    printf("Enter the name of the second file: ");
    scanf("%s", file2name);

    file1 = fopen(file1name, "r");
    file2 = fopen(file2name, "r");

    if (file1 == NULL || file2 == NULL) 
    {
        printf("Error: Cannot open one or both files.");
        exit(1);
    }

    ch1 = getc(file1);
    ch2 = getc(file2);

    while (ch1 != EOF && ch2 != EOF) 
    {
        if (ch1 != ch2) 
        {
            printf("Files are not same.\n");
            exit(1);
        }
        ch1 = getc(file1);
        ch2 = getc(file2);
    }

    if (ch1 == EOF && ch2 == EOF) 
    {
        printf("Files are same.\n");
    } 
    else 
    {
        printf("Files are not same.\n");
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
