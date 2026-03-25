#include <stdio.h>
#include "utils.h"

void checkNumberSign() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0)      printf("\n  %d is POSITIVE (above zero)\n", n);
    else if(n < 0) printf("\n  %d is NEGATIVE (below zero)\n", n);
    else           printf("\n  %d is ZERO\n", n);

    printSeparator('=', 40);
}
