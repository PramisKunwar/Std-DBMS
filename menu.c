#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"
#include "utils.h"

void waitForEnter() {
    printf("\nPress Enter to continue...");
    while (getchar() != '\n');
    getchar();
}

int main() {
    int choice;

    printBanner();

    do {
        printf("\n+------------------------------------+\n");
        printf("|            MAIN MENU               |\n");
        printf("+------------------------------------+\n");
        printf("|  1 | Average & Failed Students     |\n");
        printf("|  2 | Greatest Among 10 Numbers     |\n");
        printf("|  3 | Sort Numbers (Asc/Desc)       |\n");
        printf("|  4 | Add Two 3x3 Matrices          |\n");
        printf("|  5 | Multiply Two 3x3 Matrices     |\n");
        printf("|  6 | Check Palindrome String       |\n");
        printf("|  7 | Check Number Sign             |\n");
        printf("|  8 | Print Multiplication Table    |\n");
        printf("|  9 | Sum of Natural Numbers (Rec)  |\n");
        printf("| 10 | Factorial (Recursive)         |\n");
        printf("| 11 | Fibonacci Series (Rec)        |\n");
        printf("|  0 | Exit                          |\n");
        printf("+------------------------------------+\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printError("Invalid input! Please enter a number.");
            while (getchar() != '\n');
            continue;
        }

        printSeparator('-', 40);

        switch(choice) {
            case 1:  printInfo("Calculating average marks...");        calculateAverageAndFailed();    break;
            case 2:  printInfo("Finding the greatest number...");      findGreatestAmongTen();         break;
            case 3:  printInfo("Sorting numbers...");                  sortNumbers();                  break;
            case 4:  printInfo("Adding matrices...");                  addMatrices();                  break;
            case 5:  printInfo("Multiplying matrices...");             multiplyMatrices();             break;
            case 6:  printInfo("Checking palindrome...");              checkPalindrome();              break;
            case 7:  printInfo("Checking number sign...");             checkNumberSign();              break;
            case 8:  printInfo("Generating multiplication table...");  printMultiplicationTable();     break;
            case 9:  printInfo("Calculating sum recursively...");      calculateSumRecursive();        break;
            case 10: printInfo("Calculating factorial...");            calculateFactorialRecursive();  break;
            case 11: printInfo("Generating Fibonacci series...");      generateFibonacci();            break;
            case 0:  printf("\nThanks for using Task Manager!\n");     printSeparator('=', 40);        break;
            default: printError("Invalid choice! Please select 0-11.");
        }

        printSeparator('-', 40);
        if (choice != 0) waitForEnter();

    } while (choice != 0);

    return 0;
}
