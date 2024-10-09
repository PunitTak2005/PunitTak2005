#include <stdio.h>

int main() {

    // Open a file for reading

    FILE *file = fopen("output.txt", "r");

    if (file == NULL) {

        printf("File could not be opened.\n");

        return 1;

    }

    // Read and display the contents of the file

    char line[100];

    while (fgets(line, sizeof(line), file) != NULL) {

        printf("%s", line);

    }

    // Close the file

    fclose(file);

    return 0;

}
