#include <stdio.h>

int main() {
    int rowCount, columnCount, i, j;

    printf("Simple C Example Program for 2D Array Matrix Addition Example\n");

    printf("Number of rows of matrices to be added: ");
    scanf("%d", &rowCount);

    printf("Number of columns of matrices to be added: ");
    scanf("%d", &columnCount);

    // matrices based on user input size
    int firstMatrix[rowCount][columnCount], secondMatrix[rowCount][columnCount], resultMatrix[rowCount][columnCount];

    printf("Elements of first matrix:\n");
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j < columnCount; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Elements of second matrix:\n");
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j < columnCount; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    printf("Sum of entered matrices:\n");
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
