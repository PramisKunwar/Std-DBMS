#include <stdio.h>
#include "utils.h"

void printMatrix(int m[3][3], const char* label) {
    printf("\n%s:\n", label);
    for(int i = 0; i < 3; i++) {
        printf("  ");
        for(int j = 0; j < 3; j++) printf("%5d", m[i][j]);
        printf("\n");
    }
}

void addMatrices() {
    int a[3][3], b[3][3], sum[3][3], i, j;

    printf("\nMatrix Addition (3x3)\n");
    printSeparator('-', 40);

    printf("\nEnter Matrix A (3x3):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) { printf("  a[%d][%d]: ", i, j); scanf("%d", &a[i][j]); }

    printf("\nEnter Matrix B (3x3):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) { printf("  b[%d][%d]: ", i, j); scanf("%d", &b[i][j]); }

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) sum[i][j] = a[i][j] + b[i][j];

    printMatrix(a, "Matrix A");
    printMatrix(b, "Matrix B");
    printMatrix(sum, "A + B");
    printSeparator('=', 40);
}
