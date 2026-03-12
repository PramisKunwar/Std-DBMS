// Program to generate Nth term of fibonacci series using recursive function.

#include<stdio.h>
int fibo(int n);
void generateFibonacci()
{
    int n,i;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Fibonacci series is \t ");
    for(i=1;i<=n;i++)
    {
        printf("%d, ",fibo(i));
    }
}

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
}