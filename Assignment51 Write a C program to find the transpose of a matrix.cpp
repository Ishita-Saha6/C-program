#include <stdio.h>
void printMatrix(int matrix[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[][10], int row, int col, int transpose[][10]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    int matrix[10][10];
    int transpose[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix:\n");
    printMatrix(matrix, row, col);
    transposeMatrix(matrix, row, col, transpose);
    printf("Transpose of the Matrix:\n");
    printMatrix(transpose, col, row);

    return 0;
}

