/*Name::Garth koome MURETI
Reg No:BBIT-05-0036/2024
Date:6/03/2025
#include <stdio.h>

// Define a macro for a 1D matrix (array) of size 5
#define MATRIX_SIZE 5
#define MATRIX {1, 2, 3, 4, 5}

int main() {
    // Declare a 1D matrix using the macro
    int matrix[MATRIX_SIZE] = MATRIX;

    // Print the 1D matrix
    for (int i = 0; i < MATRIX_SIZE; i++) {
        printf("%d ", matrix[i]);
    }

    return 0;
}
