#include <stdio.h>
#include "utils.h"

void calculateAverageAndFailed() {
    int n, i, avg, a[50], sum = 0, f = 0;

    printf("\nStudent Marks Analysis\n");
    printSeparator('-', 40);

    printf("How many students? ");
    scanf("%d", &n);

    if(n <= 0 || n > 50) { printError("Invalid number of students! (1-50)"); return; }

    printf("\nEnter marks (0-100):\n");
    for(i = 0; i < n; i++) {
        printf("  Student %2d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
        printProgressBar(i + 1, n, "Processing");
        SLEEP(100);
    }
    printf("\n");

    avg = sum / n;

    printf("\nMarks Overview:\n");
    for(i = 0; i < n; i++) {
        printf("  Student %2d: %3d  ", i + 1, a[i]);
        int bar = a[i] / 5;
        for(int j = 0; j < bar; j++) printf("|");
        printf("\n");
    }

    printf("\nStatistics:\n");
    printf("  Total Marks  : %d\n", sum);
    printf("  Average Marks: %d", avg);
    if(avg >= 90)      printf("  (Excellent)\n");
    else if(avg >= 75) printf("  (Very Good)\n");
    else if(avg >= 60) printf("  (Good)\n");
    else if(avg >= 40) printf("  (Needs Improvement)\n");
    else               printf("  (Poor Performance)\n");

    for(i = 0; i < n; i++) if(a[i] < 40) f++;

    printf("  Failed       : %d student(s)\n", f);
    printf("  Pass Rate    : %.1f%%\n", (float)(n - f) / n * 100);

    printSeparator('=', 40);
}
