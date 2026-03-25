#include <stdio.h>
#include "utils.h"

void sortNumbers() {
    int a[10], i, j, temp, n;

    printf("\nNumber Sorter\n");
    printSeparator('-', 40);
    printf("How many numbers to sort? (1-10): ");
    scanf("%d", &n);

    if(n <= 0 || n > 10) { printError("Invalid number! (1-10)"); return; }

    printf("\nEnter %d numbers:\n", n);
    for(i = 0; i < n; i++) { printf("  Number %d: ", i + 1); scanf("%d", &a[i]); }

    printf("\nOriginal : ");
    for(i = 0; i < n; i++) { printf("%d", a[i]); if(i < n-1) printf(", "); }
    printf("\n");

    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
            if(a[i] > a[j]) { temp = a[i]; a[i] = a[j]; a[j] = temp; }

    printf("Ascending: ");
    for(i = 0; i < n; i++) { printf("%d", a[i]); if(i < n-1) printf(", "); }
    printf("\n");

    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
            if(a[i] < a[j]) { temp = a[i]; a[i] = a[j]; a[j] = temp; }

    printf("Descending: ");
    for(i = 0; i < n; i++) { printf("%d", a[i]); if(i < n-1) printf(", "); }
    printf("\n");

    printSuccess("Sorting completed.");
    printSeparator('=', 40);
}
