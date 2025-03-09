#include <iostream>


#define MATRIX_3D(depth, rows, cols) int matrix[depth][rows][cols]

int main() {

    MATRIX_3D(2, 3, 4);


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                matrix[i][j][k] = i * 12 + j * 4 + k;  // Fill with a pattern
            }
        }
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                std::cout << "matrix[" << i << "][" << j << "][" << k << "] = " << matrix[i][j][k] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
