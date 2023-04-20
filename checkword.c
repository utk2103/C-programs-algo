#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100], word[100], buffer[100];
    int count = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    printf("Enter the word to search: ");
    scanf("%s", word);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Cannot open file.");
        exit(1);
    }

    while (fscanf(file, "%s", buffer) != EOF) {
        if (strcmp(buffer, word) == 0) {
            count++;
        }
    }

    if (count == 0) {
        printf("'%s' does not exist in the file.\n", word);
    } else {
        printf("'%s' exists %d times in the file.\n", word, count);
    }

    fclose(file);

    return 0;
}
