# Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *file;
    char line[200];
  
    file = fopen("info.txt", "r");

    if(file == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    printf("Contents of info.txt:\n");

    while(fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
