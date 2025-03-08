#include <stdio.h>

int main() {
    int a[2][2] = { {1, 2}, {3, 4} };  // Proper matrix initialization
    int b[2][2];
// original Matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");  // Move to next row
    }

    // Transpose logic: swapping rows and columns
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            b[i][j] = a[j][i];
        }
    }
    

    // Printing the transposed matrix
    printf("The matrix b after transpose:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n"); // Print newline after each row
    }

    return 0;
}
