#include <stdio.h>
#include <string.h>
#include "utils.h"

void checkPalindrome() {
    char s[100], r[100];
    int l, i, j = 0;

    printf("Enter a string: ");
    scanf("%s", s);
    l = strlen(s);

    for(i = l - 1; i >= 0; i--) { r[j] = s[i]; j++; }
    r[j] = '\0';

    printf("\n  Original: %s\n", s);
    printf("  Reversed: %s\n", r);

    if(strcmp(s, r) == 0)
        printf("\n  Result: \"%s\" IS a palindrome.\n", s);
    else
        printf("\n  Result: \"%s\" is NOT a palindrome.\n", s);

    printSeparator('=', 40);
}
