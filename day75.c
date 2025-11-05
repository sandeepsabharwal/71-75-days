# Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char line[200];

    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    getchar(); 

    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    printf("Enter a line of text to append:\n");
    fgets(line, sizeof(line), stdin);

    fputs(line, file);

    fclose(file);

    printf("Text successfully appended to %s\n", filename);
    return 0;
}
