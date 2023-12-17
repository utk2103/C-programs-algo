#include <stdio.h>

void swapDiagonal(int matrix[][100], int n, int row)
{
    if (row == n / 2) {
        
        if (n % 2 != 0) {
            int temp = matrix[row][row];
            matrix[row][row] = matrix[row][n - 1 - row];
            matrix[row][n - 1 - row] = temp;
        }
        return;
    }

    // Swap the diagonal elements
    int temp = matrix[row][row];
    matrix[row][row] = matrix[row][n - 1 - row];
    matrix[row][n - 1 - row] = temp;

    // Recursively swap diagonal elements in the next row
    swapDiagonal(matrix, n, row + 1);
}

void printMatrix(int matrix[][100], int n)
{
    printf("Matrix after diagonal swap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Swap diagonal elements recursively
    swapDiagonal(matrix, n, 0);

    // Print the resulting matrix
    printMatrix(matrix, n);

    return 0;
}
