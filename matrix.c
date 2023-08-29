#include <stdio.h>

void multiplyMatrices(int A[][100], int B[][100], int result[][100], int rowA, int colA, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int rowA, colA, rowB, colB;

    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &rowA, &colA);

    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &rowB, &colB);

    if (colA != rowB) {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }

    int A[100][100], B[100][100], result[100][100];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(A, B, result, rowA, colA, colB);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
