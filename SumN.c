// Program to calculate sum of natural number from 1 to N using recursive function.

#include<stdio.h>
int sum(int n);
void calculateSumRecursive()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Sum = %d", sum(n));
}

int sum(int n)
{
    if(n!=0)
    {
        return (n + sum(n-1));
    }
    else
    {
        return n;
    }
}

// The core logic is return (n + sum(n-1));