/*Name:Garth koome mureti
Reg NO:BBIT-05-0036/2024
Date:6/03/2025
#include <iostream>


#define MATRIX_2D(rows, cols) int matrix[rows][cols]

int main() {

    MATRIX_2D(3, 4);


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = i * 4 + j;
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    return 0;
}

