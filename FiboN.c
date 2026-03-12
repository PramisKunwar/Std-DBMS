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

/* 
I have written code in C in different files to do the following things:
1. to input marks obtained by n-students in computer science and Calculate average marks of all and number of failed students.
2. to find the greatest number among 10 number.
3. to Sort n numbers in ascending and descending order.
4. Perform Matrix Addition of 3*3 matrix
5. Perform Matrix Multiplication of 3*3 matrix
6. to check whether the given string is palindrome or not.
7. to check whether input num is positive ,negative or zero using user defined function
8. to print multiplication table of an entered number using user define function
9. to calculate sum of natural number from 1 to N using recursive function.
10. to calculate factorial of natural number from 1 to N using recursive function.
11. to generate Nth term of fibonacci series using recursive function.

I have 11 different files for each task mentioned above. Now I want the user to choose the task he want to perform from the above tasks
and he gets the task done. How to make that?

*/