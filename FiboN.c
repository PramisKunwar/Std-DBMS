#include <stdio.h>
#include "utils.h"

int fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n-1) + fibo(n-2);
}

void generateFibonacci() {
    int n, i;

    printf("\nFibonacci Sequence Generator\n");
    printSeparator('-', 40);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    if(n <= 0) { printError("Please enter a positive number!"); return; }

    printf("\nSeries: ");
    for(i = 1; i <= n; i++) {
        printf("%d", fibo(i));
        if(i < n) { printf(", "); fflush(stdout); SLEEP(200); }
    }
    printf("\n");

    if(n >= 2) {
        float ratio = (float)fibo(n) / fibo(n-1);
        printf("\nGolden Ratio Approximation: %.6f\n", ratio);
    }

    if(n <= 15) {
        printf("\nVisual (bar per term):\n");
        for(i = 1; i <= n; i++) {
            int term = fibo(i);
            printf("  %2d: ", term);
            for(int j = 0; j < term % 40; j++) printf("|");
            printf("\n");
        }
    }

    printSeparator('=', 40);
}
