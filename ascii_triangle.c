#include <stdio.h>
#include <string.h>

#define CHARACTERS 20  // Number of rows for the pattern

int main(void) {
    int i, row, j;
    char ch;
    char letter = 'A';
    char letter3 = 'A';

    // Loop through each row
    for (row = 0; row < CHARACTERS; row++) {

        // Print leading spaces for alignment
        for (i = 0; i <= 18 - row; i++) {
            printf(" ");
        }

        // Print ascending letters
        for (i = 0, ch = letter; i <= row; i++, ch++) {
            printf("%c", ch);
        }

        // Print descending letters
        for (i = 0, ch = letter3 - 1; i < row; i++, ch--) {
            printf("%c", ch);
        }

        // Increment the starting letter for the next row
        letter3++;

        // Move to the next line after finishing the current row
        printf("\n");
    }

    return 0;
}
