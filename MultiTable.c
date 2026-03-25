#include <stdio.h>
#include "utils.h"

void printMultiplicationTable() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d:\n", n);
    printf("  +----------+--------+\n");
    printf("  | Expr     | Result |\n");
    printf("  +----------+--------+\n");
    for(int i = 1; i <= 10; i++)
        printf("  | %2d x %2d  | %6d |\n", n, i, n * i);
    printf("  +----------+--------+\n");
    printSeparator('=', 40);
}
