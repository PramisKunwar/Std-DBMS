#include <stdio.h>
#include <stdlib.h>   
#include "tasks.h"

void waitForEnter() {
    printf("\nPress Enter to continue...");
    while (getchar() != '\n');  
    getchar();                  
}

int main() {
    int choice;

    printf("\n========================================\n");
    printf("         WELCOME TO TASK MENU          \n");
    printf("========================================\n");

    do {
        printf("\n=============  MAIN MENU  =============\n");
        printf(" 1. Average marks and failed students\n");
        printf(" 2. Greatest among 10 numbers\n");
        printf(" 3. Sort numbers (ascending & descending)\n");
        printf(" 4. Add two 3x3 matrices\n");
        printf(" 5. Multiply two 3x3 matrices\n");
        printf(" 6. Check if a string is palindrome\n");
        printf(" 7. Check number sign (positive/negative/zero)\n");
        printf(" 8. Print multiplication table\n");
        printf(" 9. Sum of natural numbers (recursive)\n");
        printf("10. Factorial (recursive)\n");
        printf("11. Fibonacci series (recursive)\n");
        printf(" 0. Exit\n");
        printf("========================================\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');  
            continue;
        }

        printf("\n----------------------------------------\n");
        switch(choice) {
            case 1:  calculateAverageAndFailed(); break;
            case 2:  findGreatestAmongTen(); break;
            case 3:  sortNumbers(); break;
            case 4:  addMatrices(); break;
            case 5:  multiplyMatrices(); break;
            case 6:  checkPalindrome(); break;
            case 7:  checkNumberSign(); break;
            case 8:  printMultiplicationTable(); break;
            case 9:  calculateSumRecursive(); break;
            case 10: calculateFactorialRecursive(); break;
            case 11: generateFibonacci(); break;
            case 0:  printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice! Please select 0-11.\n");
        }
        printf("----------------------------------------\n");

        if (choice != 0) {
            waitForEnter();   
        }
    } while (choice != 0);

    return 0;
}