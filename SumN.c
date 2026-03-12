// Program to calculate sum of natural number from 1 to N using recursive function.

#include<stdio.h>
int sum(n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Sum = %d", sum(n));
    return 0;
}

int sum(n)
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