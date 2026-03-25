#include <stdio.h>
#include "utils.h"

void findGreatestAmongTen() {
    int i, gre, ar[10];

    printf("\nEnter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("  Number %2d: ", i + 1);
        scanf("%d", &ar[i]);
    }

    printf("\nNumbers: ");
    for(i = 0; i < 10; i++) { printf("%d", ar[i]); if(i < 9) printf(", "); }
    printf("\n\nSearching for maximum...\n");

    gre = ar[0];
    for(i = 1; i < 10; i++) {
        printf("  Check %2d (%d): ", i+1, ar[i]);
        if(ar[i] > gre) { printf("New max!\n"); gre = ar[i]; }
        else             { printf("Not larger\n"); }
        SLEEP(200);
    }

    printf("\nResult: %d is the greatest number.\n", gre);
    printSeparator('=', 40);
}
