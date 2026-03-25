#include <stdio.h>
#include "utils.h"

int fact(int n) { return (n == 0) ? 1 : n * fact(n - 1); }

void calculateFactorialRecursive() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) { printError("Factorial not defined for negative numbers!"); return; }

    printf("\n  %d! = %d", n, n);
    for(int i = n-1; i >= 1; i--) { printf(" x %d", i); SLEEP(80); }
    printf(" = %d\n", fact(n));

    if(n > 12) printWarning("Large values may overflow int range.");
    printSeparator('=', 40);
}
