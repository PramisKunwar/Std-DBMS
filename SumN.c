#include <stdio.h>
#include "utils.h"

int sum(int n) { return (n == 0) ? 0 : n + sum(n - 1); }

void calculateSumRecursive() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) { printError("Please enter a non-negative number!"); return; }

    printf("\n  Sum: 1");
    for(int i = 2; i <= n; i++) { printf(" + %d", i); SLEEP(80); }
    printf(" = %d\n", sum(n));
    printSeparator('=', 40);
}
