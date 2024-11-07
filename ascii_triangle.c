#include <stdio.h>
#include <string.h>

#define MAX_ROWS 15 // Number of rows in the triangle

int main(void) {
    char result[500] = "";  // Array to store the resulting string

    for (int row = 0; row < MAX_ROWS; row++) {
        char line[50] = "";  // Stores the current line of the pattern

        // Adding letters in ascending order
        for (int i = 0; i <= row; i++) {
            char letter[2];
            sprintf(letter, "%c", 'A' + i);
            strcat(line, letter);
        }

        // Adding letters in descending order
        for (int i = row - 1; i >= 0; i--) {
            char letter[2];
            sprintf(letter, "%c", 'A' + i);
            strcat(line, letter);
        }

        // Adding the line to the result with a space
        strcat(result, line);
        if (row < MAX_ROWS - 1) {
            strcat(result, " ");
        }
    }

    printf("%s\n", result); // Displaying the resulting string

    return 0;
}
