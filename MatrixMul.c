#include <stdio.h>
#include "utils.h"

void printMatrix2(int m[3][3], const char* label) {
    printf("\n%s:\n", label);
    for(int i = 0; i < 3; i++) {
        printf("  ");
        for(int j = 0; j < 3; j++) printf("%5d", m[i][j]);
        printf("\n");
    }
}

void multiplyMatrices() {
    int a[3][3], b[3][3], mul[3][3], i, j;

    printf("\nMatrix Multiplication - Element-wise (3x3)\n");
    printSeparator('-', 40);

    printf("\nEnter Matrix A (3x3):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) { printf("  a[%d][%d]: ", i, j); scanf("%d", &a[i][j]); }

    printf("\nEnter Matrix B (3x3):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) { printf("  b[%d][%d]: ", i, j); scanf("%d", &b[i][j]); }

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) mul[i][j] = a[i][j] * b[i][j];

    printMatrix2(a, "Matrix A");
    printMatrix2(b, "Matrix B");
    printMatrix2(mul, "A * B (element-wise)");
    printSeparator('=', 40);
}
