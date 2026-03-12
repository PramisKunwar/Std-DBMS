// Program to calculate factorial of natural number from 1 to N using recursive function.

#include<stdio.h>
int fact(n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Factorial = %d", fact(n));
    return 0;
}

int fact(n)
{
    if(n==0)
    {
        return (1);
    }
    else
    {
        return (n * fact(n-1));
    }
}

// The core logic is return (n * fact(n-1));